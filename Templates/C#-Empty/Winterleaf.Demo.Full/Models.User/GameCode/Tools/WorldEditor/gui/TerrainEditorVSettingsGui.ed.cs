﻿using WinterLeaf.Demo.Full.Models.User.GameCode.Tools.WorldEditor.gui.CodeBehind;
using WinterLeaf.Engine.Classes;
using WinterLeaf.Engine.Classes.Decorations;
using WinterLeaf.Engine.Classes.View.Creators;

namespace WinterLeaf.Demo.Full.Models.User.GameCode.Tools.WorldEditor.gui
    {
    public class TerrainEditorVSettingsGui
        {
        [ConsoleInteraction(true, "TerrainEditorVSettingsGui_initialize")]
        public static void initialize()
            {
            #region GuiControl (TerrainEditorValuesSettingsGui, EditorGuiGroup)        oc_Newobject19

            ObjectCreator oc_Newobject19 = new ObjectCreator("GuiControl",
                "TerrainEditorValuesSettingsGui, EditorGuiGroup");
            oc_Newobject19["profile"] = "ToolsGuiOverlayProfile";
            oc_Newobject19["horizSizing"] = "right";
            oc_Newobject19["vertSizing"] = "bottom";
            oc_Newobject19["position"] = "0 0";
            oc_Newobject19["extent"] = "640 480";
            oc_Newobject19["minExtent"] = "8 8";
            oc_Newobject19["visible"] = "1";
            oc_Newobject19["helpTag"] = "0";

            #region GuiWindowCtrl ()        oc_Newobject18

            ObjectCreator oc_Newobject18 = new ObjectCreator("GuiWindowCtrl", "");
            oc_Newobject18["profile"] = "ToolsGuiWindowProfile";
            oc_Newobject18["horizSizing"] = "center";
            oc_Newobject18["vertSizing"] = "center";
            oc_Newobject18["position"] = "117 113";
            oc_Newobject18["extent"] = "408 247";
            oc_Newobject18["minExtent"] = "8 8";
            oc_Newobject18["visible"] = "1";
            oc_Newobject18["helpTag"] = "0";
            oc_Newobject18["text"] = "Terrain Action Values";
            oc_Newobject18["maxLength"] = "255";
            oc_Newobject18["resizeWidth"] = "0";
            oc_Newobject18["resizeHeight"] = "0";
            oc_Newobject18["canMove"] = "1";
            oc_Newobject18["canClose"] = "0";
            oc_Newobject18["canMinimize"] = "0";
            oc_Newobject18["canMaximize"] = "0";
            oc_Newobject18["minSize"] = "50 50";
            oc_Newobject18["closeCommand"] = "Canvas.popDIalog(TerrainEditorValuesSettingsGui);";

            #region GuiControl ()        oc_Newobject8

            ObjectCreator oc_Newobject8 = new ObjectCreator("GuiControl", "");
            oc_Newobject8["profile"] = "ToolsGuiWindowProfile";
            oc_Newobject8["horizSizing"] = "right";
            oc_Newobject8["vertSizing"] = "bottom";
            oc_Newobject8["position"] = "198 27";
            oc_Newobject8["extent"] = "203 115";
            oc_Newobject8["minExtent"] = "8 8";
            oc_Newobject8["visible"] = "1";
            oc_Newobject8["helpTag"] = "0";

            #region GuiTextEditCtrl ()        oc_Newobject1

            ObjectCreator oc_Newobject1 = new ObjectCreator("GuiTextEditCtrl", "");
            oc_Newobject1["profile"] = "ToolsGuiTextEditProfile";
            oc_Newobject1["horizSizing"] = "right";
            oc_Newobject1["vertSizing"] = "bottom";
            oc_Newobject1["position"] = "86 12";
            oc_Newobject1["extent"] = "107 18";
            oc_Newobject1["minExtent"] = "8 8";
            oc_Newobject1["visible"] = "1";
            oc_Newobject1["variable"] = "ETerrainEditor.adjustHeightVal";
            oc_Newobject1["command"] = "ETerrainEditor.adjustHeightVal = $ThisControl.getValue();";
            oc_Newobject1["helpTag"] = "0";
            oc_Newobject1["maxLength"] = "255";
            oc_Newobject1["historySize"] = "0";
            oc_Newobject1["password"] = "0";
            oc_Newobject1["tabComplete"] = "0";
            oc_Newobject1["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject1["tooltip"] = "Adjust height increment.";

            #endregion

            oc_Newobject8["#Newobject1"] = oc_Newobject1;

            #region GuiTextEditCtrl ()        oc_Newobject2

            ObjectCreator oc_Newobject2 = new ObjectCreator("GuiTextEditCtrl", "");
            oc_Newobject2["profile"] = "ToolsGuiTextEditProfile";
            oc_Newobject2["horizSizing"] = "right";
            oc_Newobject2["vertSizing"] = "bottom";
            oc_Newobject2["position"] = "86 62";
            oc_Newobject2["extent"] = "107 18";
            oc_Newobject2["minExtent"] = "8 8";
            oc_Newobject2["visible"] = "1";
            oc_Newobject2["variable"] = "ETerrainEditor.scaleVal";
            oc_Newobject2["command"] = "ETerrainEditor.scaleVal = $ThisControl.getValue();";
            oc_Newobject2["helpTag"] = "0";
            oc_Newobject2["maxLength"] = "255";
            oc_Newobject2["historySize"] = "0";
            oc_Newobject2["password"] = "0";
            oc_Newobject2["tabComplete"] = "0";
            oc_Newobject2["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject2["tooltip"] = "Scale height increment.";

            #endregion

            oc_Newobject8["#Newobject2"] = oc_Newobject2;

            #region GuiTextEditCtrl ()        oc_Newobject3

            ObjectCreator oc_Newobject3 = new ObjectCreator("GuiTextEditCtrl", "");
            oc_Newobject3["profile"] = "ToolsGuiTextEditProfile";
            oc_Newobject3["horizSizing"] = "right";
            oc_Newobject3["vertSizing"] = "bottom";
            oc_Newobject3["position"] = "86 87";
            oc_Newobject3["extent"] = "107 18";
            oc_Newobject3["minExtent"] = "8 8";
            oc_Newobject3["visible"] = "1";
            oc_Newobject3["variable"] = "ETerrainEditor.smoothFactor";
            oc_Newobject3["command"] = "ETerrainEditor.smoothFactor = $ThisControl.getValue();";
            oc_Newobject3["helpTag"] = "0";
            oc_Newobject3["maxLength"] = "255";
            oc_Newobject3["historySize"] = "0";
            oc_Newobject3["password"] = "0";
            oc_Newobject3["tabComplete"] = "0";
            oc_Newobject3["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject3["tooltip"] = "Smoothing factor -- lower values are less agressive.";

            #endregion

            oc_Newobject8["#Newobject3"] = oc_Newobject3;

            #region GuiTextCtrl ()        oc_Newobject4

            ObjectCreator oc_Newobject4 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject4["profile"] = "ToolsGuiTextProfile";
            oc_Newobject4["horizSizing"] = "right";
            oc_Newobject4["vertSizing"] = "bottom";
            oc_Newobject4["position"] = "11 12";
            oc_Newobject4["extent"] = "64 18";
            oc_Newobject4["minExtent"] = "8 8";
            oc_Newobject4["visible"] = "1";
            oc_Newobject4["helpTag"] = "0";
            oc_Newobject4["text"] = "Adjust Height";
            oc_Newobject4["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject4["tooltip"] = "Adjust height increment.";
            oc_Newobject4["maxLength"] = "255";

            #endregion

            oc_Newobject8["#Newobject4"] = oc_Newobject4;

            #region GuiTextCtrl ()        oc_Newobject5

            ObjectCreator oc_Newobject5 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject5["profile"] = "ToolsGuiTextProfile";
            oc_Newobject5["horizSizing"] = "right";
            oc_Newobject5["vertSizing"] = "bottom";
            oc_Newobject5["position"] = "11 37";
            oc_Newobject5["extent"] = "49 18";
            oc_Newobject5["minExtent"] = "8 8";
            oc_Newobject5["visible"] = "1";
            oc_Newobject5["helpTag"] = "0";
            oc_Newobject5["text"] = "Set Height";
            oc_Newobject5["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject5["tooltip"] = "Elevation for set height operation.";
            oc_Newobject5["maxLength"] = "255";

            #endregion

            oc_Newobject8["#Newobject5"] = oc_Newobject5;

            #region GuiTextCtrl ()        oc_Newobject6

            ObjectCreator oc_Newobject6 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject6["profile"] = "ToolsGuiTextProfile";
            oc_Newobject6["horizSizing"] = "right";
            oc_Newobject6["vertSizing"] = "bottom";
            oc_Newobject6["position"] = "11 62";
            oc_Newobject6["extent"] = "60 18";
            oc_Newobject6["minExtent"] = "8 8";
            oc_Newobject6["visible"] = "1";
            oc_Newobject6["helpTag"] = "0";
            oc_Newobject6["text"] = "Scale Height";
            oc_Newobject6["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject6["tooltip"] = "Scale height increment.";
            oc_Newobject6["maxLength"] = "255";

            #endregion

            oc_Newobject8["#Newobject6"] = oc_Newobject6;

            #region GuiTextCtrl ()        oc_Newobject7

            ObjectCreator oc_Newobject7 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject7["profile"] = "ToolsGuiTextProfile";
            oc_Newobject7["horizSizing"] = "right";
            oc_Newobject7["vertSizing"] = "bottom";
            oc_Newobject7["position"] = "10 87";
            oc_Newobject7["extent"] = "70 18";
            oc_Newobject7["minExtent"] = "8 8";
            oc_Newobject7["visible"] = "1";
            oc_Newobject7["helpTag"] = "0";
            oc_Newobject7["text"] = "Smooth Factor";
            oc_Newobject7["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject7["tooltip"] = "Smoothing factor -- lower values are less agressive.";
            oc_Newobject7["maxLength"] = "255";

            #endregion

            oc_Newobject8["#Newobject7"] = oc_Newobject7;

            #endregion

            oc_Newobject18["#Newobject8"] = oc_Newobject8;

            #region GuiButtonCtrl ()        oc_Newobject9

            ObjectCreator oc_Newobject9 = new ObjectCreator("GuiButtonCtrl", "");
            oc_Newobject9["profile"] = "ToolsGuiButtonProfile";
            oc_Newobject9["horizSizing"] = "right";
            oc_Newobject9["vertSizing"] = "bottom";
            oc_Newobject9["position"] = "218 205";
            oc_Newobject9["extent"] = "80 20";
            oc_Newobject9["minExtent"] = "8 8";
            oc_Newobject9["visible"] = "1";
            oc_Newobject9["command"] = "Canvas.popDIalog(TerrainEditorValuesSettingsGui);";
            oc_Newobject9["helpTag"] = "0";
            oc_Newobject9["text"] = "OK";
            oc_Newobject9["groupNum"] = "-1";
            oc_Newobject9["buttonType"] = "PushButton";

            #endregion

            oc_Newobject18["#Newobject9"] = oc_Newobject9;

            #region GuiControl ()        oc_Newobject16

            ObjectCreator oc_Newobject16 = new ObjectCreator("GuiControl", "", typeof (TerrainEditorSettingsGui));
            oc_Newobject16["profile"] = "ToolsGuiWindowProfile";
            oc_Newobject16["horizSizing"] = "right";
            oc_Newobject16["vertSizing"] = "bottom";
            oc_Newobject16["position"] = "7 27";
            oc_Newobject16["extent"] = "188 212";
            oc_Newobject16["minExtent"] = "8 8";
            oc_Newobject16["visible"] = "1";
            oc_Newobject16["helpTag"] = "0";

            #region GuiFilterCtrl (TESoftSelectFilter)        oc_Newobject10

            ObjectCreator oc_Newobject10 = new ObjectCreator("GuiFilterCtrl", "TESoftSelectFilter");
            oc_Newobject10["profile"] = "ToolsGuiDefaultProfile";
            oc_Newobject10["horizSizing"] = "right";
            oc_Newobject10["vertSizing"] = "bottom";
            oc_Newobject10["position"] = "20 22";
            oc_Newobject10["extent"] = "155 162";
            oc_Newobject10["minExtent"] = "8 8";
            oc_Newobject10["visible"] = "1";
            oc_Newobject10["helpTag"] = "0";
            oc_Newobject10["controlPoints"] = "7";
            oc_Newobject10["filter"] = "1.000000 0.833333 0.666667 0.500000 0.333333 0.166667 0.000000";

            #endregion

            oc_Newobject16["#Newobject10"] = oc_Newobject10;

            #region GuiTextCtrl ()        oc_Newobject11

            ObjectCreator oc_Newobject11 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject11["profile"] = "ToolsGuiTextProfile";
            oc_Newobject11["horizSizing"] = "right";
            oc_Newobject11["vertSizing"] = "bottom";
            oc_Newobject11["position"] = "6 4";
            oc_Newobject11["extent"] = "67 18";
            oc_Newobject11["minExtent"] = "8 8";
            oc_Newobject11["visible"] = "1";
            oc_Newobject11["helpTag"] = "0";
            oc_Newobject11["text"] = "Soft Selection";
            oc_Newobject11["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject11["tooltip"] =
                "This spline scale modifies the hardness of the brush.  Left is center, right is outer edge.";
            oc_Newobject11["maxLength"] = "255";

            #endregion

            oc_Newobject16["#Newobject11"] = oc_Newobject11;

            #region GuiTextCtrl ()        oc_Newobject12

            ObjectCreator oc_Newobject12 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject12["profile"] = "ToolsGuiTextProfile";
            oc_Newobject12["horizSizing"] = "right";
            oc_Newobject12["vertSizing"] = "bottom";
            oc_Newobject12["position"] = "12 189";
            oc_Newobject12["extent"] = "8 18";
            oc_Newobject12["minExtent"] = "8 8";
            oc_Newobject12["visible"] = "1";
            oc_Newobject12["helpTag"] = "0";
            oc_Newobject12["text"] = "0";
            oc_Newobject12["maxLength"] = "255";

            #endregion

            oc_Newobject16["#Newobject12"] = oc_Newobject12;

            #region GuiTextCtrl ()        oc_Newobject13

            ObjectCreator oc_Newobject13 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject13["profile"] = "ToolsGuiTextProfile";
            oc_Newobject13["horizSizing"] = "right";
            oc_Newobject13["vertSizing"] = "bottom";
            oc_Newobject13["position"] = "12 26";
            oc_Newobject13["extent"] = "8 18";
            oc_Newobject13["minExtent"] = "8 8";
            oc_Newobject13["visible"] = "1";
            oc_Newobject13["helpTag"] = "0";
            oc_Newobject13["text"] = "1";
            oc_Newobject13["maxLength"] = "255";

            #endregion

            oc_Newobject16["#Newobject13"] = oc_Newobject13;

            #region GuiTextCtrl ()        oc_Newobject14

            ObjectCreator oc_Newobject14 = new ObjectCreator("GuiTextCtrl", "");
            oc_Newobject14["profile"] = "ToolsGuiTextProfile";
            oc_Newobject14["horizSizing"] = "right";
            oc_Newobject14["vertSizing"] = "bottom";
            oc_Newobject14["position"] = "60 190";
            oc_Newobject14["extent"] = "45 18";
            oc_Newobject14["minExtent"] = "8 8";
            oc_Newobject14["visible"] = "1";
            oc_Newobject14["helpTag"] = "0";
            oc_Newobject14["text"] = "<Radius>";
            oc_Newobject14["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject14["tooltip"] = "Brush radius for Selection Mode.";
            oc_Newobject14["maxLength"] = "255";

            #endregion

            oc_Newobject16["#Newobject14"] = oc_Newobject14;

            #region GuiTextEditCtrl ()        oc_Newobject15

            ObjectCreator oc_Newobject15 = new ObjectCreator("GuiTextEditCtrl", "");
            oc_Newobject15["profile"] = "ToolsGuiTextEditProfile";
            oc_Newobject15["horizSizing"] = "right";
            oc_Newobject15["vertSizing"] = "bottom";
            oc_Newobject15["position"] = "125 187";
            oc_Newobject15["extent"] = "50 18";
            oc_Newobject15["minExtent"] = "8 8";
            oc_Newobject15["visible"] = "1";
            oc_Newobject15["variable"] = "ETerrainEditor.softSelectRadius";
            oc_Newobject15["command"] = "ETerrainEditor.softSelectRadius = $ThisControl.getValue();";
            oc_Newobject15["helpTag"] = "0";
            oc_Newobject15["maxLength"] = "255";
            oc_Newobject15["historySize"] = "0";
            oc_Newobject15["password"] = "0";
            oc_Newobject15["tabComplete"] = "0";
            oc_Newobject15["tooltipprofile"] = "ToolsGuiToolTipProfile";
            oc_Newobject15["tooltip"] = "Brush radius for Selection Mode.";

            #endregion

            oc_Newobject16["#Newobject15"] = oc_Newobject15;

            #endregion

            oc_Newobject18["#Newobject16"] = oc_Newobject16;

            #region GuiButtonCtrl (TESettingsApplyButton)        oc_Newobject17

            ObjectCreator oc_Newobject17 = new ObjectCreator("GuiButtonCtrl", "TESettingsApplyButton",
                typeof (TESettingsApplyButton));
            oc_Newobject17["profile"] = "ToolsGuiButtonProfile";
            oc_Newobject17["horizSizing"] = "right";
            oc_Newobject17["vertSizing"] = "bottom";
            oc_Newobject17["position"] = "307 205";
            oc_Newobject17["extent"] = "80 20";
            oc_Newobject17["minExtent"] = "8 8";
            oc_Newobject17["visible"] = "1";
            oc_Newobject17["helpTag"] = "0";
            oc_Newobject17["text"] = "Apply";
            oc_Newobject17["groupNum"] = "-1";
            oc_Newobject17["buttonType"] = "PushButton";

            #endregion

            oc_Newobject18["#Newobject17"] = oc_Newobject17;

            #endregion

            oc_Newobject19["#Newobject18"] = oc_Newobject18;

            #endregion

            oc_Newobject19.Create();
            }
        }
    }