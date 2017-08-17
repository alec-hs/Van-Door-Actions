
class CfgPatches {
	class soft_f_vda_MRAP_02
    addonRootClass = "soft_f_vda";
    requiredAddons[] = {"soft_f_vda"};
    requiredVersion = 0.1;
    units[] = {};
    weapons[] = {};
	};
};


class CfgVehicles {

	class MRAP_02_base_F {

		class UserActions {

			class door_action {
				userActionID = 52;
				displayName = "Open Door";
				radius = 10;
				available = 0;
				priority = 0.5;
				position = "";
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "false";
				statement = "";
			};

			/*Door_LF, Door_RF, Door_LB, Door_RB, Door_rear*/

			class open_driver_door: door_action {
				userActionID = 53;
				displayName = "Open Driver Door";
				available = 1;
				condition = "(this animationPhase 'Door_1_source' == 0) && ((player distance2D (this modelToWorld [-1,2.2,-1])) < 2) && ((this getCargoIndex player) != 0)";
				statement = "this animateDoor ['Door_1_source', 1,false];";
			};

			class close_driver_door: door_action {
				userActionID = 54;
				displayName = "Close Driver Door";
				available = 1;
				condition = "(this animationPhase 'Door_1_source' == 1) && ((player distance2D (this modelToWorld [-1,2.2,-1])) < 2) && ((this getCargoIndex player) != 0)";
				statement = "this animateDoor ['Door_1_source', 0,false];";
			};
		};
	};
};
