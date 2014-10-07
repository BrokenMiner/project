﻿#region

using WinterLeaf.Demo.Full.Models.User.GameCode.Client.Gui;
using WinterLeaf.Demo.Full.Models.User.GameCode.Client.Gui;
using WinterLeaf.Demo.Full.Models.User.GameCode.Client.PostEffects.Gui;
using WinterLeaf.Demo.Full.Models.User.GameCode.Client.PostEffects.Shaders;
using WinterLeaf.Demo.Full.Models.User.Extendable;
using WinterLeaf.Engine.Classes;
using WinterLeaf.Engine.Classes.Decorations;
using WinterLeaf.Engine.Classes.Extensions;
using WinterLeaf.Engine.Classes.View.Creators;
using WinterLeaf.Engine.Containers;
using WinterLeaf.Engine.Enums;
using WinterLeaf.Engine.Classes.Interopt;

#endregion

namespace WinterLeaf.Demo.Full.Models.User.GameCode.Client
    {
    public class defaultBind
        {
        public static int movementSpeed = 1;

        private static readonly pInvokes omni = new pInvokes();

        public static void initialize()
            {
            if ("moveMap".isObject())
                "moveMap".delete();

            ActionMap moveMap = new ObjectCreator("ActionMap", "moveMap").Create();
            ActionMap GlobalActionMap = "GlobalActionMap";

            moveMap.bindCmd("keyboard", "escape", "", "handleEscape();");
            moveMap.bind("keyboard", "ctrl h", "hideHUDs");
            moveMap.bind("keyboard", "alt p", "doScreenShotHudless");


            moveMap.bind("keyboard", "a", "moveleft");
            moveMap.bind("keyboard", "d", "moveright");
            moveMap.bind("keyboard", "left", "moveleft");
            moveMap.bind("keyboard", "right", "moveright");

            moveMap.bind("keyboard", "w", "moveforward");
            moveMap.bind("keyboard", "s", "movebackward");
            moveMap.bind("keyboard", "up", "moveforward");
            moveMap.bind("keyboard", "down", "movebackward");

            moveMap.bind("keyboard", "e", "moveup");
            moveMap.bind("keyboard", "c", "movedown");

            moveMap.bind("keyboard", "space", "jump");
            moveMap.bind("mouse", "xaxis", "yaw");
            moveMap.bind("mouse", "yaxis", "pitch");

            moveMap.bind("gamepad", "thumbrx", "D", "-0.23 0.23", "gamepadYaw");
            moveMap.bind("gamepad", "thumbry", "D", "-0.23 0.23", "gamepadPitch");
            moveMap.bind("gamepad", "thumblx", "D", "-0.23 0.23", "gamePadMoveX");
            moveMap.bind("gamepad", "thumbly", "D", "-0.23 0.23", "gamePadMoveY");

            moveMap.bind("gamepad", "btn_a", "jump");
            moveMap.bindCmd("gamepad", "btn_back", "disconnect();", "");

            moveMap.bindCmd("gamepad", "dpadl", "toggleLightColorViz();", "");
            moveMap.bindCmd("gamepad", "dpadr", "metrics(fps);", "");
            GlobalActionMap.bind("gamepad", "dpadu", "toggleConsole");
            moveMap.bindCmd("gamepad", "dpadd", "toggleNormalsViz();", "");

            moveMap.bind("mouse", "button0", "mouseFire");

            moveMap.bind("gamepad", "triggerr", "gamepadFire");
            moveMap.bind("gamepad", "triggerl", "gamepadAltTrigger");

            if (omni.sGlobal["$Player::CurrentFOV"] == "")
                omni.iGlobal["$Player::CurrentFOV"] = omni.iGlobal["$pref::Player::DefaultFOV"]/2;

            moveMap.bind("keyboard", "f", "setZoomFOV"); // f for field of view
            moveMap.bind("keyboard", "z", "toggleZoom"); // z for zoom
            moveMap.bind("mouse", "button1", "mouseButtonZoom");
            moveMap.bind("gamepad", "btn_rt", "toggleZoom");


            moveMap.bind("keyboard", "v", "toggleFreeLook"); // v for vanity
            moveMap.bind("keyboard", "tab", "toggleFirstPerson");
            moveMap.bind("keyboard", "alt c", "toggleCamera");

            moveMap.bind("gamepad", "btn_start", "toggleCamera");
            moveMap.bind("gamepad", "btn_y", "toggleFirstPerson");
            



            //------------------------------------------------------------------------------
            // Item manipulation

            moveMap.bind("keyboard", "F3", "startRecordingDemo");
            moveMap.bind("keyboard", "F4", "stopRecordingDemo");


            GlobalActionMap.bind("keyboard", "ctrl o", "bringUpOptions");


            GlobalActionMap.bind("keyboard", "ctrl F3", "doProfile");

            //------------------------------------------------------------------------------
            // Misc.
            //------------------------------------------------------------------------------

            GlobalActionMap.bind("keyboard", "tilde", "toggleConsole");
            GlobalActionMap.bind("keyboard", "alt tilde", "ShowNewTools");
            GlobalActionMap.bindCmd("keyboard", "alt k", "cls();", "");
            GlobalActionMap.bindCmd("keyboard", "alt enter", "", "Canvas.attemptFullscreenToggle();");
            GlobalActionMap.bindCmd("keyboard", "F1", "", "contextHelp();");
            moveMap.bindCmd("keyboard", "n", "toggleNetGraph();", "");

            // Bind the keys to the carjack command
            moveMap.bindCmd("keyboard", "ctrl z", "carjack();", "");

            
            moveMap.bindCmd("gamepad", "connect", "echo(\"Pressed Xbox Button\");", "");      //Button_Xbox
            }

        [ConsoleInteraction(true)]
        public static void escapeFromGame()
            {
            if (omni.sGlobal["$Server::ServerType"] == "SinglePlayer")
                messageBox.MessageBoxYesNo("Exit", "Exit from this Mission?", "disconnect();", "");
            else
                messageBox.MessageBoxYesNo("Disconnect", "Disconnect from the server?", "disconnect();", "");
            }

        

        [ConsoleInteraction(true)]
        public static void hideHUDs(bool val)
            {
            if (val)
                "HudlessPlayGui".call("toggle");
            }

        [ConsoleInteraction(true)]
        public static void doScreenShotHudless(bool val)
            {
            if (val)
                {
                ((GuiCanvas) "Canvas").setContent("HudlessPlayGui");
                omni.Util._schedule("10", "0", "doScreenShot", val.AsString());
                }
            else
                {
                ((GuiCanvas) "Canvas").setContent("PlayGui");
                }
            }

        [ConsoleInteraction(true)]
        public static void setSpeed(int speed)
            {
            if (speed.AsBool())
                movementSpeed = speed;
            }

        [ConsoleInteraction(true)]
        public static void moveleft(int val)
            {
            omni.iGlobal["$mvLeftAction"] = movementSpeed*val;
            }

        [ConsoleInteraction(true)]
        public static void moveright(int val)
            {
            //console.SetVar("$mvRightAction", val.AsInt()*movementSpeed);
            omni.iGlobal["$mvRightAction"] = val*movementSpeed;
            }

        [ConsoleInteraction(true)]
        public static void moveforward(int val)
            {
            //console.SetVar("$mvForwardAction", val.AsInt() * movementSpeed);
            omni.iGlobal["$mvForwardAction"] = val*movementSpeed;
            }

        [ConsoleInteraction(true)]
        public static void movebackward(int val)
            {
            omni.iGlobal["$mvBackwardAction"] = val*movementSpeed;
            //console.SetVar("$mvBackwardAction", val.AsInt() * movementSpeed);
            }

        [ConsoleInteraction(true)]
        public static void moveup(int val)
            {
            SimObject obj = ((GameConnection) "ServerConnection").getControlObject();
            if (obj.isInNamespaceHierarchy("Camera"))
                omni.iGlobal["$mvUpAction"] = val*movementSpeed;
            //console.SetVar("$mvUpAction", val.AsInt() * movementSpeed);
            }

        [ConsoleInteraction(true)]
        public static void movedown(int val)
            {
            SimObject obj = ((GameConnection) "ServerConnection").getControlObject();
            if (obj.isInNamespaceHierarchy("Camera"))
                omni.iGlobal["$mvDownAction"] = val*movementSpeed;
            //console.SetVar("$mvDownAction", val.AsInt() * movementSpeed);
            }

        [ConsoleInteraction(true)]
        public static void turnLeft(bool val)
            {
            omni.iGlobal["$mvYawRightSpeed"] = val ? omni.iGlobal["$Pref::Input::KeyboardTurnSpeed"] : 0;
            //console.SetVar("$mvYawRightSpeed", val.AsBool() ? console.GetVarInt("$Pref::Input::KeyboardTurnSpeed") : 0);
            }

        [ConsoleInteraction(true)]
        public static void turnRight(bool val)
            {
            //console.SetVar("$mvYawLeftSpeed", val.AsBool() ? console.GetVarInt("$Pref::Input::KeyboardTurnSpeed") : 0);
            omni.iGlobal["$mvYawLeftSpeed"] = val ? omni.iGlobal["$Pref::Input::KeyboardTurnSpeed"] : 0;
            }

        [ConsoleInteraction(true)]
        public static void panUp(bool val)
            {
            omni.iGlobal["$mvPitchDownSpeed"] = val ? omni.iGlobal["$Pref::Input::KeyboardTurnSpeed"] : 0;
            //console.SetVar("$mvPitchDownSpeed", val.AsBool() ? console.GetVarInt("$Pref::Input::KeyboardTurnSpeed") : 0);
            }

        [ConsoleInteraction(true)]
        public static void panDown(bool val)
            {
            omni.iGlobal["$mvPitchUpSpeed"] = val ? omni.iGlobal["$Pref::Input::KeyboardTurnSpeed"] : 0;
            //console.SetVar("$mvPitchUpSpeed", val.AsBool() ? console.GetVarInt("$Pref::Input::KeyboardTurnSpeed") : 0);
            }

        [ConsoleInteraction(true)]
        public static float getMouseAdjustAmount(float val)
            {
            return ((val*(omni.fGlobal["$cameraFov"]/90.0f)*0.01f)*omni.fGlobal["$pref::Input::LinkMouseSensitivity"]);
            //return ((val.AsDouble() * (console.GetVarFloat("$cameraFov") / 90.0) * 0.01) * console.GetVarFloat("$pref::Input::LinkMouseSensitivity")).AsString();
            }

        [ConsoleInteraction(true)]
        public static float getGamepadAdjustAmount(float val)
            {
            return ((val*(omni.fGlobal["$cameraFov"]/90.0f)*0.01f)*10.0f);
            //return ((val.AsFloat() * (console.GetVarFloat("$cameraFov") / 90) * 0.01) * 10.0).AsString();
            }

        [ConsoleInteraction(true)]
        public static void yaw(float val)
            {
            float yawAdj = getMouseAdjustAmount(val);
            if (((GameConnection) "ServerConnection").isControlObjectRotDampedCamera())
                {
                yawAdj = omni.Util.mClamp(yawAdj, (-omni.Util.m2Pi() + (float) 0.01), (omni.Util.m2Pi() - (float) 0.01));
                yawAdj *= (float) 0.5;
                }
            omni.fGlobal["$mvYaw"] = omni.fGlobal["$mvYaw"] + yawAdj;
            //console.SetVar("$mvYaw", console.GetVarFloat("$mvYaw") + yawAdj);
            }

        [ConsoleInteraction(true)]
        public static void pitch(float val)
            {
            float pitchAdj = getMouseAdjustAmount(val);
            if (((GameConnection) "ServerConnection").isControlObjectRotDampedCamera())
                {
                pitchAdj = omni.Util.mClamp(pitchAdj, (-omni.Util.m2Pi() + (float) 0.01),
                    (omni.Util.m2Pi() - (float) 0.01));
                pitchAdj *= (float) 0.5;
                }
            omni.fGlobal["$mvPitch"] = omni.fGlobal["$mvPitch"] + pitchAdj;
            //console.SetVar("$mvPitch", console.GetVarFloat("$mvPitch") + pitchAdj);
            }

        [ConsoleInteraction(true)]
        public static void Jump(string val)
            {
            omni.iGlobal["$mvTriggerCount2"] = omni.iGlobal["$mvTriggerCount2"] + 1;
            //console.SetVar("$mvTriggerCount2", console.GetVarInt("$mvTriggerCount2") + 1);
            }

        [ConsoleInteraction(true)]
        public static void gamePadMoveX(double val)
            {
            if (val > 0)
                {
                omni.dGlobal["$mvRightAction"] = val*movementSpeed;
                omni.dGlobal["$mvLeftAction"] = 0;
                //console.SetVar("$mvRightAction", (val * movementSpeed).AsString());
                //console.SetVar("$mvLeftAction", 0);
                }
            else
                {
                omni.dGlobal["$mvRightAction"] = 0;
                omni.dGlobal["$mvLeftAction"] = -val*movementSpeed;
                //console.SetVar("$mvRightAction", 0);
                //console.SetVar("$mvLeftAction", (-val * movementSpeed).AsString());
                }
            }

        [ConsoleInteraction(true)]
        public static void gamePadMoveY(double val)
            {
            if (val > 0)
                {
                omni.dGlobal["$mvForwardAction"] = val*movementSpeed;
                omni.dGlobal["$mvBackwardAction"] = 0;
                //console.SetVar("$mvForwardAction", val.AsDouble() * movementSpeed);
                //console.SetVar("$mvBackwardAction", 0);
                }
            else
                {
                omni.dGlobal["$mvForwardAction"] = 0;
                //console.SetVar("$mvForwardAction", 0);
                omni.dGlobal["$mvBackwardAction"] = -val*movementSpeed;
                //console.SetVar("$mvBackwardAction", -val.AsDouble() * movementSpeed);
                }
            }

        [ConsoleInteraction(true)]
        public static void gamepadYaw(float val)
            {
            float yawAdj = getGamepadAdjustAmount(val);
            if (((GameConnection) "ServerConnection").isControlObjectRotDampedCamera())
                {
                yawAdj = omni.Util.mClamp(yawAdj, (float) (-omni.Util.m2Pi() + 0.01), (float) (omni.Util.m2Pi() - 0.01));
                yawAdj *= (float) 0.5;
                }

            if (yawAdj > 0)
                {
                omni.fGlobal["$mvYawLeftSpeed"] = yawAdj;
                omni.fGlobal["$mvYawRightSpeed"] = 0;
                //console.SetVar("$mvYawLeftSpeed", yawAdj);
                //console.SetVar("$mvYawRightSpeed", 0);
                }
            else
                {
                omni.fGlobal["$mvYawLeftSpeed"] = 0;
                //console.SetVar("$mvYawLeftSpeed", 0);
                omni.fGlobal["$mvYawRightSpeed"] = -yawAdj;
                //console.SetVar("$mvYawRightSpeed", -yawAdj);
                }
            }

        [ConsoleInteraction(true)]
        public static void gamepadPitch(float val)
            {
            float pitchAdj = getGamepadAdjustAmount(val);
            if (((GameConnection) "ServerConnection").isControlObjectRotDampedCamera())
                {
                pitchAdj = omni.Util.mClamp(pitchAdj, (float) (-omni.Util.m2Pi() + 0.01),
                    (float) (omni.Util.m2Pi() - 0.01));
                pitchAdj *= (float) 0.5;
                }
            if (pitchAdj > 0)
                {
                omni.fGlobal["$mvPitchDownSpeed"] = -pitchAdj;  //- and + swap for INVERTED look
                omni.fGlobal["$mvPitchUpSpeed"] = 0;
                //console.SetVar("$mvPitchDownSpeed", pitchAdj);
                //console.SetVar("$mvPitchUpSpeed", 0);
                }
            else
                {
                omni.fGlobal["$mvPitchDownSpeed"] = 0;
                omni.fGlobal["$mvPitchUpSpeed"] = pitchAdj; //- and + swap for INVERTED look
                //console.SetVar("$mvPitchDownSpeed", 0);
                //console.SetVar("$mvPitchUpSpeed", -pitchAdj);
                }
            }

        [ConsoleInteraction(true)]
        public static void doCrouch(string val)
            {
            omni.iGlobal["$mvTriggerCount3"] += 1;
            //console.SetVar("$mvTriggerCount3", console.GetVarString("$mvTriggerCount3").AsInt() + 1);
            }

        [ConsoleInteraction(true)]
        public static void doSprint(string val)
            {
            omni.iGlobal["$mvTriggerCount5"] += 1;
            //console.SetVar("$mvTriggerCount5", console.GetVarString("$mvTriggerCount5").AsInt() + 1);
            }

        [ConsoleInteraction(true)]
        public static void mouseFire(string val)
            {
            omni.iGlobal["$mvTriggerCount0"] += 1;
            //console.SetVar("$mvTriggerCount0", console.GetVarString("$mvTriggerCount0").AsInt() + 1);
            }

        [ConsoleInteraction(true)]
        public static void altTrigger(string val)
            {
            omni.iGlobal["$mvTriggerCount1"] += 1;
            //console.SetVar("$mvTriggerCount1", console.GetVarString("$mvTriggerCount1").AsInt() + 1);
            }

        [ConsoleInteraction(true)]
        public static void gamepadFire(double val)
            {
            if (val > .1 && !omni.console.GetVarBool("$gamepadFireTriggered"))
                {
                omni.bGlobal["$gamepadFireTriggered"] = true;
                omni.Util.rumble("gamepad", (float)0.25, (float)0.25);//deviceName, Left Motor(low-frequency),Right Motor(high-frequency)//Rumble Start
                //console.SetVar("$gamepadFireTriggered", true);
                //console.SetVar("$mvTriggerCount0", console.GetVarString("$mvTriggerCount0").AsInt() + 1);
                }
            else
                {
                omni.bGlobal["$gamepadFireTriggered"] = false;
                omni.Util.rumble("gamepad", 0, 0);
                //console.SetVar("$gamepadFireTriggered", false);
                //console.SetVar("$mvTriggerCount0", console.GetVarString("$mvTriggerCount0").AsInt() + 1);
                }
            omni.iGlobal["$mvTriggerCount0"] += 1;
            }

        [ConsoleInteraction(true)]
        public static void gamepadAltTrigger(double val)
            {
            if (val > .1 && !omni.bGlobal["$gamepadFireTriggered"])
                {
                omni.bGlobal["$gamepadAltTriggerTriggered"] = true;
                //                console.SetVar("$gamepadAltTriggerTriggered", true);
                }
            else
                {
                omni.bGlobal["$gamepadAltTriggerTriggered"] = false;
                //console.SetVar("$gamepadAltTriggerTriggered", false);
                }
            omni.iGlobal["$mvTriggerCount1"] += 1;
            //console.SetVar("$mvTriggerCount1", console.GetVarString("$mvTriggerCount1").AsInt() + 1);
            }

        [ConsoleInteraction(true)]
        public static void toggleZoomFOV()
            {
            float cfov = omni.fGlobal["$Player::CurrentFOV"]/(float) 2.0;

            omni.console.SetVar("$Player::CurrentFOV", cfov);
            omni.fGlobal["$Player::CurrentFOV"] = cfov;

            if (cfov < 5)
                resetCurrentFOV();

            if (((GameConnection) "ServerConnection")["zoomed"].AsBool())
                //console.GetVarBool("ServerConnection.zoomed"))

                omni.console.Call("setFov", new[] {cfov.AsString()});
            else
                omni.console.Call("setFov",
                    new[] {omni.console.GetVarString("ServerConnection.getControlCameraDefaultFov()")});
            }

        [ConsoleInteraction(true)]
        public static void mouseButtonZoom(bool val)
            {
            toggleZoom(val);
            }

        [ConsoleInteraction(true)]
        public static void resetCurrentFOV()
            {
            omni.fGlobal["$Player::CurrentFOV"] = ((GameConnection) "ServerConnection").getControlCameraDefaultFov()/
                                                  2.0f;
            //console.SetVar("$Player::CurrentFOV", console.GetVarFloat("ServerConnection.getControlCameraDefaultFov") / (float)2.0);
            }

        [ConsoleInteraction(true)]
        public static void turnOffZoom()
            {
            omni.console.SetVar("ServerConnection.zoomed", false);
            omni.console.Call("setFov",
                new[] {((GameConnection) "ServerConnection").getControlCameraDefaultFov().AsString()});
            postFXManager.ppOptionsUpdateDOFSettings();
            }

        [ConsoleInteraction(true)]
        public static void setZoomFOV(bool val)
            {
            if (val)
                toggleZoomFOV();
            }

        [ConsoleInteraction(true)]
        public static void toggleZoom(bool val)
            {
            if (val)
                {
                omni.console.SetVar("ServerConnection.zoomed", true);
                omni.console.Call("setFov", new[] {omni.console.GetVarString("$Player::CurrentFOV")});

                ((DOFPostEffect) "DOFPostEffect").setAutoFocus(true);
                //DOFPostEffectsetAutoFocus("DOFPostEffect", true);

                ((DOFPostEffect) "DOFPostEffect").setFocusParams(0.5f, 0.5f, 50f, 500f, -5f, 5f);

                ((DOFPostEffect) "DOFPostEffect").enable();
                //console.Call("DOFPostEffect", "enabled");
                }
            else
                turnOffZoom();
            }

        [ConsoleInteraction(true)]
        public static void toggleFreeLook(bool val)
            {
            omni.bGlobal["$mvFreeLook"] = val;
            //console.SetVar("$mvFreeLook", val);
            }

        [ConsoleInteraction(true)]
        public static void toggleFirstPerson(bool val)
            {
            if (val)
                {
                GameConnection ServerConnection = "ServerConnection";
                ServerConnection.setFirstPerson(!ServerConnection.isFirstPerson());
                //((GameConnection) "ServerConnection").setFirstPerson(!((GameConnection) "ServerConnection").isFirstPerson());
                }
            }

        [ConsoleInteraction(true)]
        public static void toggleCamera(bool val)
            {
            if (val)
                omni.console.commandToServer("ToggleCamera");
            }

        [ConsoleInteraction(true)]
        public static void startRecordingDemo(bool val)
            {
            if (val)
                omni.console.Call("StartDemoRecord");
            }

        [ConsoleInteraction(true)]
        public static void stopRecordingDemo(bool val)
            {
            if (val)
                omni.console.Call("StopDemoRecord");
            }

        

        [ConsoleInteraction(true)]
        public static void bringUpOptions(bool val)
            {
            if (val)
                {
                omni.console.Call("showCursor");
                ((GuiCanvas) "Canvas").pushDialog("OptionsDlg");
                }
            }

        //internal static void cycleDebugRenderMode(bool val)
        //    {
        //    if (!val)
        //        return;
        //    iGlobal["$MFDebugRenderMode"] += 1;
        //    //console.SetVar("$MFDebugRenderMode", console.GetVarInt("$MFDebugRenderMode") + 1);

        //    if (iGlobal["$MFDebugRenderMode"] > 16)
        //        iGlobal["$MFDebugRenderMode"] = 0;
        //    if (iGlobal["$MFDebugRenderMode"] == 15)
        //        iGlobal["$MFDebugRenderMode"] = 16;

        //    Util.setInteriorRenderMode(console.GetVarInt("$MFDebugRenderMode"));

        //    if (!console.isObject("ChatHud"))
        //        return;
        //    string message = "Setting Interior debug render mode to ";
        //    string debugMode = "Unknown";
        //    switch (iGlobal["$MFDebugRenderMode"])
        //        {
        //        case 0:
        //            debugMode = "NormalRender";
        //            break;
        //        case 1:
        //            debugMode = "NormalRenderLines";
        //            break;
        //        case 2:
        //            debugMode = "ShowDetail";
        //            break;
        //        case 3:
        //            debugMode = "ShowAmbiguous";
        //            break;
        //        case 4:
        //            debugMode = "ShowOrphan";
        //            break;
        //        case 5:
        //            debugMode = "ShowLightmaps";
        //            break;
        //        case 6:
        //            debugMode = "ShowTexturesOnly";
        //            break;
        //        case 7:
        //            debugMode = "ShowPortalZones";
        //            break;
        //        case 8:
        //            debugMode = "ShowOutsideVisible";
        //            break;
        //        case 9:
        //            debugMode = "ShowCollisionFans";
        //            break;
        //        case 10:
        //            debugMode = "ShowStrips";
        //            break;
        //        case 11:
        //            debugMode = "ShowNullSurfaces";
        //            break;
        //        case 12:
        //            debugMode = "ShowLargeTextures";
        //            break;
        //        case 13:
        //            debugMode = "ShowHullSurfaces";
        //            break;
        //        case 14:
        //            debugMode = "ShowVehicleHullSurfaces";
        //            break;
        //        case 15:
        //            debugMode = "";
        //            break;
        //        case 16:
        //            debugMode = "ShowDetailLevel";
        //            break;
        //        }
        //    ChatHudAddLine("ChatHud", message + debugMode);
        //    }
        [ConsoleInteraction(true)]
        public static void doProfile(bool val)
            {
            if (val)
                {
                omni.console.print("Starting profile session...");
                omni.Util.profilerReset();
                omni.Util.profilerEnable(true);
                }
            else
                {
                omni.console.print("Ending profile session...");
                omni.Util.profilerDumpToFile("profilerDumpToFile" + omni.console.Call("getSimTime") + ".txt");
                omni.Util.profilerEnable(false);
                }
            }

        }
    }