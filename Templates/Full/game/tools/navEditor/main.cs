//-----------------------------------------------------------------------------
// Copyright (c) Daniel Buckmaster 2012
//-----------------------------------------------------------------------------

// These values should align with enum PolyFlags in walkabout/nav.h
$Nav::WalkFlag = 1 << 0;
$Nav::SwimFlag = 1 << 1;
$Nav::JumpFlag = 1 << 2;
$Nav::LedgeFlag = 1 << 3;
$Nav::DropFlag = 1 << 4;
$Nav::ClimbFlag = 1 << 5;
$Nav::TeleportFlag = 1 << 6;

function initializeNavEditor()
{
   echo(" % - Initializing Navigation Editor");

   // Execute all relevant scripts and GUIs.
   exec("./NavEditor.cs");
   exec("./NavEditorGui.gui");
   exec("./NavEditorToolbar.gui");
   exec("./NavEditorGui.cs");
   exec("./NavEditorAboutDlg.gui");
   exec("./NavEditorConsoleDlg.gui");
   exec("./CreateNewNavMeshDlg.gui");

   // Add ourselves to EditorGui, where all the other tools reside
   NavEditorGui.setVisible(false);  
   NavEditorToolbar.setVisible(false); 
   NavEditorOptionsWindow.setVisible(false);
   NavEditorTreeWindow.setVisible(false);
   NavEditorConsoleDlg.setVisible(false);

   EditorGui.add(NavEditorGui);
   EditorGui.add(NavEditorToolbar);
   EditorGui.add(NavEditorOptionsWindow);
   EditorGui.add(NavEditorTreeWindow);
   EditorGui.add(NavEditorConsoleDlg);

   new ScriptObject(NavEditorPlugin)
   {
      superClass = "EditorPlugin";
      editorGui = NavEditorGui;
   };

   // Bind shortcuts for the nav editor.
   %map = new ActionMap();
   %map.bindCmd(keyboard, "1", "ENavEditorSelectModeBtn.performClick();", "");
   %map.bindCmd(keyboard, "2", "ENavEditorLinkModeBtn.performClick();", "");
   %map.bindCmd(keyboard, "3", "ENavEditorCoverModeBtn.performClick();", "");
   %map.bindCmd(keyboard, "4", "ENavEditorTileModeBtn.performClick();", "");
   %map.bindCmd(keyboard, "5", "ENavEditorTestModeBtn.performClick();", "");
   %map.bindCmd(keyboard, "c", "NavEditorConsoleBtn.performClick();", "");
   NavEditorPlugin.map = %map;

   NavEditorPlugin.initSettings();
}

function destroyNavEditor()
{
}

function NavEditorPlugin::onWorldEditorStartup(%this)
{    
    // Add ourselves to the window menu.
   %accel = EditorGui.addToEditorsMenu("Navigation Editor", "", NavEditorPlugin);   

   // Add ourselves to the ToolsToolbar.
   %tooltip = "Navigation Editor (" @ %accel @ ")";   
   EditorGui.addToToolsToolbar("NavEditorPlugin", "NavEditorPalette", expandFilename("tools/navEditor/images/nav-editor"), %tooltip);

   GuiWindowCtrl::attach(NavEditorOptionsWindow, NavEditorTreeWindow);

   // Add ourselves to the Editor Settings window.
   exec("./NavEditorSettingsTab.gui");
   ESettingsWindow.addTabPage(ENavEditorSettingsPage);
   ENavEditorSettingsPage.init();

   // Add items to World Editor Creator
   EWCreatorWindow.beginGroup("Navigation");

      EWCreatorWindow.registerMissionObject("NavMesh", "Navigation mesh");
      EWCreatorWindow.registerMissionObject("NavPath", "Path");
      EWCreatorWindow.registerMissionObject("CoverPoint", "Cover point");

   EWCreatorWindow.endGroup();
}

function ENavEditorSettingsPage::init(%this)
{
   // Initialises the settings controls in the settings dialog box.
   %this-->SpawnClassOptions.clear();
   %this-->SpawnClassOptions.add("AIPlayer");
   %this-->SpawnClassOptions.setFirstSelected();
}

function NavEditorPlugin::onActivated(%this)
{
   %this.readSettings();

   // Set a global variable so everyone knows we're editing!
   $Nav::EditorOpen = true;

   // Start off in Select mode.
   ToolsPaletteArray->NavEditorSelectMode.performClick();
   EditorGui.bringToFront(NavEditorGui);

   NavEditorGui.setVisible(true);
   NavEditorGui.makeFirstResponder(true);
   NavEditorToolbar.setVisible(true);

   NavEditorOptionsWindow.setVisible(true);
   NavEditorTreeWindow.setVisible(true);

   // Inspect the ServerNavMeshSet, which contains all the NavMesh objects
   // in the mission.
   if(!isObject(ServerNavMeshSet))
      new SimSet(ServerNavMeshSet);
   if(ServerNavMeshSet.getCount() == 0)
	  MessageBoxYesNo("No NavMesh", "There is no NavMesh in this level. Would you like to create one?" SPC
	                                "If not, please use the World Editor to create a new NavMesh.",
	                                "Canvas.pushDialog(CreateNewNavMeshDlg);");
   NavTreeView.open(ServerNavMeshSet, true);

   // Push our keybindings to the top. (See initializeNavEditor for where this
   // map was created.)
   %this.map.push();

   // Store this on a dynamic field
   // in order to restore whatever setting
   // the user had before.
   %this.prevGizmoAlignment = GlobalGizmoProfile.alignment;

   // Always use Object alignment.
   GlobalGizmoProfile.alignment = "Object";

   // Set the status bar here until all tool have been hooked up
   EditorGuiStatusBar.setInfo("Navigation editor.");
   EditorGuiStatusBar.setSelection("");

   // Allow the Gui to setup.
   NavEditorGui.onEditorActivated(); 

   Parent::onActivated(%this);
}

function NavEditorPlugin::onDeactivated(%this)
{
   %this.writeSettings();

   $Nav::EditorOpen = false;   

   NavEditorGui.setVisible(false);
   NavEditorToolbar.setVisible(false);
   NavEditorOptionsWindow.setVisible(false);
   NavEditorTreeWindow.setVisible(false);
   %this.map.pop();

   // Restore the previous Gizmo alignment settings.
   GlobalGizmoProfile.alignment = %this.prevGizmoAlignment;  

   // Allow the Gui to cleanup.
   NavEditorGui.onEditorDeactivated(); 

   Parent::onDeactivated(%this);
}

function NavEditorPlugin::onEditMenuSelect(%this, %editMenu)
{
   %hasSelection = false;
}

function NavEditorPlugin::handleDelete(%this)
{
   // Event happens when the user hits 'delete'.
   NavEditorGui.deleteSelected();
}

function NavEditorPlugin::handleEscape(%this)
{
   return NavEditorGui.onEscapePressed();  
}

function NavEditorPlugin::isDirty(%this)
{
   return NavEditorGui.isDirty;
}

function NavEditorPlugin::onSaveMission(%this, %missionFile)
{
   if(NavEditorGui.isDirty)
   {
      MissionGroup.save(%missionFile);
      NavEditorGui.isDirty = false;
   }
}

//-----------------------------------------------------------------------------
// Settings
//-----------------------------------------------------------------------------

function NavEditorPlugin::initSettings(%this)
{
   EditorSettings.beginGroup("NavEditor", true);

   EditorSettings.setDefaultValue("SpawnClass",     "AIPlayer");
   EditorSettings.setDefaultValue("SpawnDatablock", "DefaultPlayerData");

   EditorSettings.endGroup();
}

function NavEditorPlugin::readSettings(%this)
{
   EditorSettings.beginGroup("NavEditor", true);

   NavEditorGui.spawnClass     = EditorSettings.value("SpawnClass");
   NavEditorGui.spawnDatablock = EditorSettings.value("SpawnDatablock");

   EditorSettings.endGroup();  
}

function NavEditorPlugin::writeSettings(%this)
{
   EditorSettings.beginGroup("NavEditor", true);

   EditorSettings.setValue("SpawnClass",     NavEditorGui.spawnClass);
   EditorSettings.setValue("SpawnDatablock", NavEditorGui.spawnDatablock);

   EditorSettings.endGroup();
}

function ESettingsWindowPopup::onWake(%this)
{
   %this.setSelected(%this.findText(EditorSettings.value(%this.editorSettingsValue)));
}

function ESettingsWindowPopup::onSelect(%this)
{
   EditorSettings.setValue(%this.editorSettingsValue, %this.getText());
   eval(%this.editorSettingsRead);
}

//-----------------------------------------------------------------------------
// Demo
//-----------------------------------------------------------------------------

function OnWalkaboutDemoLimit()
{
   MessageBoxOK("Walkabout demo",
      "This demo only allows two NavMeshes to be created. Sorry!");
}

function OnWalkaboutDemoSave()
{
   MessageBoxOK("Walkabout demo",
      "This demo doesn't allow you to save NavMeshes. Sorry!" SPC
      "The rest of your mission will still be saved.");
}
