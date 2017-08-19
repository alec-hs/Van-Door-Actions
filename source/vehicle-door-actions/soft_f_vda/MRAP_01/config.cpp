
class CfgPatches {
	class soft_f_vda_MRAP_01 {
    addonRootClass = "soft_f_vda";
    requiredAddons[] = {"soft_f_vda"};
    requiredVersion = 0.1;
    units[] = {};
    weapons[] = {};
	};
};


class CfgVehicles {

	class B_MRAP_01_F {

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

			class open_lf_door: door_action {
				userActionID = 53;
				displayName = "Open Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 0) && ((player distance2D (this modelToWorld [-0.8,-1.2,-0.3])) < 2) && (!((this getCargoIndex player) in [0,1,2]))";
				statement = "this animateDoor ['Door_LF', 1,false];";
			};

			class close_lf_door: door_action {
				userActionID = 54;
				displayName = "Close Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 1) && ((player distance2D (this modelToWorld [-0.8,-1.2,-0.3])) < 2) && (!((this getCargoIndex player) in [0,1,2]))";
				statement = "this animateDoor ['Door_LF', 0,false];";
			};

			class open_rf_door: door_action {
				userActionID = 53;
				displayName = "Open Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 0) && ((player distance2D (this modelToWorld [0.8,-1.2,-0.3])) < 2) && (driver this != player) && (!((this getCargoIndex player) in [1,2]))";
				statement = "this animateDoor ['Door_RF', 1,false];";
			};

			class close_rf_door: door_action {
				userActionID = 54;
				displayName = "Close Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 1) && ((player distance2D (this modelToWorld [0.8,-1.2,-0.3])) < 2) && (driver this != player) && (!((this getCargoIndex player) in [1,2]))";
				statement = "this animateDoor ['Door_RF', 0,false];";
			};

			class open_lb_door: door_action {
				userActionID = 53;
				displayName = "Open Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_LB' == 0) && ((player distance2D (this modelToWorld [-0.8,-2.0,-0.3])) < 2 && (driver this != player)) && (!((this getCargoIndex player) in [0,1]))";
				statement = "this animateDoor ['Door_LB', 1,false];";
			};

			class close_lb_door: door_action {
				userActionID = 54;
				displayName = "Close Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_LB' == 1) && ((player distance2D (this modelToWorld [-0.8,-2.0,-0.3])) < 2) && (driver this != player) && (!((this getCargoIndex player) in [0,1]))";
				statement = "this animateDoor ['Door_LB', 0,false];";
			};

			class open_rb_door: door_action {
				userActionID = 53;
				displayName = "Open Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_RB' == 0) && ((player distance2D (this modelToWorld [0.8,-2.0,-0.3])) < 2) && (driver this != player) && (!((this getCargoIndex player) in [0,2]))";
				statement = "this animateDoor ['Door_RB', 1,false];";
			};

			class close_rb_door: door_action {
				userActionID = 54;
				displayName = "Close Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_RB' == 1) && ((player distance2D (this modelToWorld [0.8,-2.0,-0.3])) < 2) && (driver this != player) && (!((this getCargoIndex player) in [0,2]))";
				statement = "this animateDoor ['Door_RB', 0,false];";
			};
		};
	};
};
