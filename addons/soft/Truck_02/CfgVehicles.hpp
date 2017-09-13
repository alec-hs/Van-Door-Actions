class CfgVehicles {

	class Truck_02_base_F {

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

			class open_driver_door: door_action {
				userActionID = 53;
				displayName = "Open Driver Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 0) && ((player distance2D (this modelToWorld [-0.9,2.9,-0.3])) < 2)";
				statement = "this animateDoor ['Door_LF', 1,false];";
			};

			class close_driver_door: door_action {
				userActionID = 54;
				displayName = "Close Driver Door";
				available = 1;
				condition = "(this animationPhase 'Door_LF' == 1) && ((player distance2D (this modelToWorld [-0.9,2.9,-0.3])) < 2)";
				statement = "this animateDoor ['Door_LF', 0,false];";
			};

			class open_passenger_door: door_action {
				userActionID = 53;
				displayName = "Open Passenger Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 0) && ((player distance2D (this modelToWorld [0.9,2.9,-0.3])) < 2)";
				statement = "this animateDoor ['Door_RF', 1,false];";
			};

			class close_passenger_door: door_action {
				userActionID = 54;
				displayName = "Close Passenger Door";
				available = 1;
				condition = "(this animationPhase 'Door_RF' == 1) && ((player distance2D (this modelToWorld [0.9,2.9,-0.3])) < 2)";
				statement = "this animateDoor ['Door_RF', 0,false];";
			};
		};
	};
};
