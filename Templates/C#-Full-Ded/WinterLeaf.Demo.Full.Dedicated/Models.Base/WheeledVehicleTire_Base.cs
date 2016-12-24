


#region
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using WinterLeaf.Engine;
using WinterLeaf.Engine.Classes;
using WinterLeaf.Engine.Containers;
using WinterLeaf.Engine.Enums;
using System.ComponentModel;
using System.Threading;
using  WinterLeaf.Engine.Classes.Interopt;
using WinterLeaf.Engine.Classes.Decorations;
using WinterLeaf.Engine.Classes.Extensions;
using WinterLeaf.Engine.Classes.Helpers;
using Winterleaf.Demo.Full.Dedicated.Models.User.Extendable;
#endregion

namespace Winterleaf.Demo.Full.Dedicated.Models.Base
    {
    /// <summary>
    /// 
    /// </summary>
    [TypeConverter(typeof(TypeConverterGeneric<WheeledVehicleTire_Base>))]
    public partial class WheeledVehicleTire_Base: SimDataBlock
{

#region ProxyObjects Operator Overrides
        /// <summary>
        /// 
        /// </summary>
        /// <param name="ts"></param>
        /// <param name="simobjectid"></param>
        /// <returns></returns>
        public static bool operator ==(WheeledVehicleTire_Base ts, string simobjectid)
            {
            return object.ReferenceEquals(ts, null) ? object.ReferenceEquals(simobjectid, null) : ts.Equals(simobjectid);
            }
  /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        public override int GetHashCode()
            {
            return base.GetHashCode();
            }
  /// <summary>
        /// 
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public override bool Equals(object obj)
            {
            
            return (this._ID ==(string)myReflections.ChangeType( obj,typeof(string)));
            }
        /// <summary>
        /// 
        /// </summary>
        /// <param name="ts"></param>
        /// <param name="simobjectid"></param>
        /// <returns></returns>
        public static bool operator !=(WheeledVehicleTire_Base ts, string simobjectid)
            {
            if (object.ReferenceEquals(ts, null))
                return !object.ReferenceEquals(simobjectid, null);
            return !ts.Equals(simobjectid);

            }


            /// <summary>
        /// 
        /// </summary>
        /// <param name="ts"></param>
        /// <returns></returns>
        public static implicit operator string( WheeledVehicleTire_Base ts)
            {
            if (object.ReferenceEquals(ts, null))
                 return "0";
            return ts._ID;
            }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="ts"></param>
        /// <returns></returns>
        public static implicit operator WheeledVehicleTire_Base(string ts)
            {
            uint simobjectid = resolveobject(ts);
           return  (WheeledVehicleTire_Base) Omni.self.getSimObject(simobjectid,typeof(WheeledVehicleTire_Base));
            }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="ts"></param>
        /// <returns></returns>
        public static implicit operator int( WheeledVehicleTire_Base ts)
            {
            return (int)ts._iID;
            }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="simobjectid"></param>
        /// <returns></returns>
        public static implicit operator WheeledVehicleTire_Base(int simobjectid)
            {
            return  (WheeledVehicleTire) Omni.self.getSimObject((uint)simobjectid,typeof(WheeledVehicleTire_Base));
            }


        /// <summary>
        /// 
        /// </summary>
        /// <param name="ts"></param>
        /// <returns></returns>
        public static implicit operator uint( WheeledVehicleTire_Base ts)
            {
            return ts._iID;
            }

        /// <summary>
        /// 
        /// </summary>
        /// <returns></returns>
        public static implicit operator WheeledVehicleTire_Base(uint simobjectid)
            {
            return  (WheeledVehicleTire_Base) Omni.self.getSimObject(simobjectid,typeof(WheeledVehicleTire_Base));
            }
#endregion
#region Init Persists
/// <summary>
/// Tire friction when the wheel is slipping (no traction). 
/// </summary>
[MemberGroup("")]
public float kineticFriction
       {
       get
          {
          return Omni.self.GetVar(_ID + ".kineticFriction").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".kineticFriction", value.AsString());
          }
       }
/// <summary>
/// Damping force applied against lateral forces generated by the tire.\n\n   @see lateralForce 
/// </summary>
[MemberGroup("")]
public float lateralDamping
       {
       get
          {
          return Omni.self.GetVar(_ID + ".lateralDamping").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".lateralDamping", value.AsString());
          }
       }
/// <summary>
/// @brief Tire force perpendicular to the direction of movement.\n\n   Lateral force can in simple terms be considered left/right steering    force. WheeledVehicles are acted upon by forces generated by their tires    and the lateralForce measures the magnitude of the force exerted on the    vehicle when the tires are deformed along the x-axis. With real wheeled    vehicles, tires are constantly being deformed and it is the interplay of    deformation forces which determines how a vehicle moves. In Torque's    simulation of vehicle physics, tire deformation obviously can't be handled    with absolute realism, but the interplay of a vehicle's velocity, its    engine's torque and braking forces, and its wheels' friction, lateral    deformation, lateralDamping, lateralRelaxation, longitudinal deformation,    longitudinalDamping, and longitudinalRelaxation forces, along with its    wheels' angular velocity are combined to create a robust real-time    physical simulation.\n\n   For this field, the larger the value supplied for the lateralForce, the    larger the effect steering maneuvers can have. In Torque tire forces are    applied at a vehicle's wheel hubs. 
/// </summary>
[MemberGroup("")]
public float lateralForce
       {
       get
          {
          return Omni.self.GetVar(_ID + ".lateralForce").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".lateralForce", value.AsString());
          }
       }
/// <summary>
/// @brief Relaxing force applied against lateral forces generated by the tire.\n\n   The lateralRelaxation force measures how strongly the tire effectively    un-deforms.\n\n@see lateralForce 
/// </summary>
[MemberGroup("")]
public float lateralRelaxation
       {
       get
          {
          return Omni.self.GetVar(_ID + ".lateralRelaxation").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".lateralRelaxation", value.AsString());
          }
       }
/// <summary>
/// Damping force applied against longitudinal forces generated by the tire.\n\n   @see longitudinalForce 
/// </summary>
[MemberGroup("")]
public float longitudinalDamping
       {
       get
          {
          return Omni.self.GetVar(_ID + ".longitudinalDamping").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".longitudinalDamping", value.AsString());
          }
       }
/// <summary>
/// @brief Tire force in the direction of movement.\n\n   Longitudinal force can in simple terms be considered forward/backward    movement force. WheeledVehicles are acted upon by forces generated by    their tires and the longitudinalForce measures the magnitude of the    force exerted on the vehicle when the tires are deformed along the y-axis.\n\n   For this field, the larger the value, the larger the effect    acceleration/deceleration inputs have.\n\n   @see lateralForce 
/// </summary>
[MemberGroup("")]
public float longitudinalForce
       {
       get
          {
          return Omni.self.GetVar(_ID + ".longitudinalForce").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".longitudinalForce", value.AsString());
          }
       }
/// <summary>
/// @brief Relaxing force applied against longitudinal forces generated by the tire.\n\n   The longitudinalRelaxation force measures how strongly the tire effectively    un-deforms.\n\n   @see longitudinalForce 
/// </summary>
[MemberGroup("")]
public float longitudinalRelaxation
       {
       get
          {
          return Omni.self.GetVar(_ID + ".longitudinalRelaxation").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".longitudinalRelaxation", value.AsString());
          }
       }
/// <summary>
/// The mass of the wheel.\nCurrently unused. 
/// </summary>
[MemberGroup("")]
public float mass
       {
       get
          {
          return Omni.self.GetVar(_ID + ".mass").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".mass", value.AsString());
          }
       }
/// <summary>
/// @brief The radius of the wheel.\n\n   The radius is determined from the bounding box of the shape provided    in the shapefile field, and does not need to be specified in script.    The tire should be built with its hub axis along the object's Y-axis. 
/// </summary>
[MemberGroup("")]
public float radius
       {
       get
          {
          return Omni.self.GetVar(_ID + ".radius").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".radius", value.AsString());
          }
       }
/// <summary>
/// Tire restitution.\nCurrently unused. 
/// </summary>
[MemberGroup("")]
public float restitution
       {
       get
          {
          return Omni.self.GetVar(_ID + ".restitution").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".restitution", value.AsString());
          }
       }
/// <summary>
/// The path to the shape to use for the wheel. 
/// </summary>
[MemberGroup("")]
public TypeShapeFilename shapeFile
       {
       get
          {
          return Omni.self.GetVar(_ID + ".shapeFile").AsTypeShapeFilename();
          }
       set
          {
          Omni.self.SetVar(_ID + ".shapeFile", value.AsString());
          }
       }
/// <summary>
/// Tire friction when the wheel is not slipping (has traction). 
/// </summary>
[MemberGroup("")]
public float staticFriction
       {
       get
          {
          return Omni.self.GetVar(_ID + ".staticFriction").AsFloat();
          }
       set
          {
          Omni.self.SetVar(_ID + ".staticFriction", value.AsString());
          }
       }

#endregion
#region Member Functions

#endregion
#region T3D Callbacks

#endregion
public WheeledVehicleTire_Base (){}
}}
