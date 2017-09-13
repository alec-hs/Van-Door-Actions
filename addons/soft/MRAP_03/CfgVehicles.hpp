class CfgVehicles {

	class MRAP_03_base_F {

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

			class open_left_door: door_action {
				userActionID = 53;
				displayName = "Open Left Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 0) && ((player distance2D (this modelToWorld [-1.1,0.1,-0.3])) < 2)";
				statement = "this animateDoor ['Door_LF', 1,false];";
			};

			class close_left_door: door_action {
				userActionID = 54;
				displayName = "Close Left Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 1) && ((player distance2D (this modelToWorld [-1.1,0.1,-0.3])) < 2)";
				statement = "this animateDoor ['Door_LF', 0,false];";
			};

			class open_right_door: door_action {
				userActionID = 53;
				displayName = "Open Right Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 0) && ((player distance2D (this modelToWorld [1.1,0.1,-0.3])) < 2)";
				statement = "this animateDoor ['Door_RF', 1,false];";
			};

			class close_right_door: door_action {
				userActionID = 54;
				displayName = "Close Right Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 1) && ((player distance2D (this modelToWorld [1.1,0.1,-0.3])) < 2)";
				statement = "this animateDoor ['Door_RF', 0,false];";
			};
		};
	};
};
