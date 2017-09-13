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

			class open_left_front_door: door_action {
				userActionID = 53;
				displayName = "Open Left Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 0) && ((player distance2D (this modelToWorld [-0.8,-0.8,-0.5])) < 2) && (!((this getCargoIndex player) in [0,1,2,3]))";
				statement = "this animateDoor ['Door_LF', 1,false];";
			};

			class close_left_front_door: door_action {
				userActionID = 54;
				displayName = "Close Left Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 1) && ((player distance2D (this modelToWorld [-0.8,-0.8,-0.5])) < 2) && (!((this getCargoIndex player) in [0,1,2,3]))";
				statement = "this animateDoor ['Door_LF', 0,false];";
			};

			class open_left_middle_door: door_action {
				userActionID = 53;
				displayName = "Open Left Middle Door";
				available = 1;
				condition = "(this animationPhase 'Door_LM' == 0) && ((player distance2D (this modelToWorld [-0.8,-2,-0.5])) < 2) && (!((this getCargoIndex player) in [2,3]) && (driver this != player))";
				statement = "this animateDoor ['Door_LM', 1,false];";
			};

			class close_left_middle_door: door_action {
				userActionID = 54;
				displayName = "Close Left Middle Door";
				available = 1;
				condition = "(this animationPhase 'Door_LM' == 1) && ((player distance2D (this modelToWorld [-0.8,-2,-0.5])) < 2) && (!((this getCargoIndex player) in [2,3]) && (driver this != player))";
				statement = "this animateDoor ['Door_LM', 0,false];";
			};

			class open_right_front_door: door_action {
				userActionID = 53;
				displayName = "Open Right Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 0) && ((player distance2D (this modelToWorld [0.8,-0.8,-0.5])) < 2) && (!((this getCargoIndex player) in [0,1,2,3]))";
				statement = "this animateDoor ['Door_RF', 1,false];";
			};

			class close_right_front_door: door_action {
				userActionID = 54;
				displayName = "Close Right Front Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 1) && ((player distance2D (this modelToWorld [0.8,-0.8,-0.5])) < 2) && (!((this getCargoIndex player) in [0,1,2,3]))";
				statement = "this animateDoor ['Door_RF', 0,false];";
			};

			class open_right_middle_door: door_action {
				userActionID = 53;
				displayName = "Open Right Middle Door";
				available = 1;
				condition = "(this animationPhase 'Door_RM' == 0) && ((player distance2D (this modelToWorld [0.8,-2,-0.5])) < 2) && (!((this getCargoIndex player) in [2,3]) && (driver this != player))";
				statement = "this animateDoor ['Door_RM', 1,false];";
			};

			class close_right_middle_door: door_action {
				userActionID = 54;
				displayName = "Close Right Middle Door";
				available = 1;
				condition = "(this animationPhase 'Door_RM' == 1) && ((player distance2D (this modelToWorld [0.8,-2,-0.5])) < 2) && (!((this getCargoIndex player) in [2,3]) && (driver this != player))";
				statement = "this animateDoor ['Door_RM', 0,false];";
			};

			class open_back_door: door_action {
				userActionID = 53;
				displayName = "Open Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_rear' == 0) && ((player distance2D (this modelToWorld [0,-4.5,-0.5])) < 2)";
				statement = "this animateDoor ['Door_rear', 1,false];";
			};

			class close_back_door: door_action {
				userActionID = 54;
				displayName = "Close Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_rear' == 1) && ((player distance2D (this modelToWorld [0,-4.5,-0.5])) < 2)";
				statement = "this animateDoor ['Door_rear', 0,false];";
			};
		};
	};
};
