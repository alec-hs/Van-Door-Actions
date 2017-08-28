
class CfgPatches {
	class soft_f_vda_Van_02 {
    addonRootClass = "soft_f_vda";
    requiredAddons[] = {"soft_f_vda"};
    requiredVersion = 0.1;
    units[] = {};
    weapons[] = {};
	};
};


class CfgVehicles {

	class Van_02_base_F {

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


			class open_passenger_door: door_action {
				userActionID = 55;
				displayName = "Open Passenger Door";
				available = 1;
				condition = "(this animationPhase 'Door_2_source' == 0) && ((player distance2D (this modelToWorld [1,2.2,-1])) < 2) && (driver this != player)";
				statement = "this animateDoor ['Door_2_source', 1,false];";
			};

			class close_passenger_door: door_action {
				userActionID = 56;
				displayName = "Close Passenger Door";
				available = 1;
				condition = "(this animationPhase 'Door_2_source' == 1) && ((player distance2D (this modelToWorld [1,2.2,-1])) < 2) && (driver this != player)";
				statement = "this animateDoor ['Door_2_source', 0,false];";
			};

			class open_side_door: door_action {
				userActionID = 57;
				displayName = "Open Side Door";
				available = 1;
				condition = "(this animationPhase 'Door_3_source' == 0) && ((player distance2D (this modelToWorld [1,1,-1])) < 2) && (driver this != player) && ((this getCargoIndex player) != 0)";
				statement = "this animateDoor ['Door_3_source', 1,false];";
			};

			class close_side_door: door_action {
				userActionID = 58;
				displayName = "Close Side Door";
				available = 1;
				condition = "(this animationPhase 'Door_3_source' == 1) && ((player distance2D (this modelToWorld [1,1,-1])) < 2) && (driver this != player) && ((this getCargoIndex player) != 0)";
				statement = "this animateDoor ['Door_3_source', 0,false];";
			};

			class open_back_door: door_action {
				userActionID = 59;
				displayName = "Open Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_4_source' == 0) && ((player distance2D (this modelToWorld [0,-3,-1])) < 2)";
				statement = "this animateDoor ['Door_4_source', 1,false];";
			};

			class close_back_door: door_action {
				userActionID = 60;
				displayName = "Close Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_4_source' == 1) && ((player distance2D (this modelToWorld [0,-3,-1])) < 2)";
				statement = "this animateDoor ['Door_4_source', 0,false];";
			};
		};
	};

	class Van_02_transport_base_F: Van_02_base_F {

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
				condition = "(this animationPhase 'Door_1_source' == 0) && ((player distance2D (this modelToWorld [-1,2.2,-1])) < 2) && (!((this getCargoIndex player) in [0,8]))";
				statement = "this animateDoor ['Door_1_source', 1,false];";
			};

			class close_driver_door: door_action {
				userActionID = 54;
				displayName = "Close Driver Door";
				available = 1;
				condition = "(this animationPhase 'Door_1_source' == 1) && ((player distance2D (this modelToWorld [-1,2.2,-1])) < 2) && (!((this getCargoIndex player) in [0,8]))";
				statement = "this animateDoor ['Door_1_source', 0,false];";
			};


			class open_passenger_door: door_action {
				userActionID = 55;
				displayName = "Open Passenger Door";
				available = 1;
				condition = "(this animationPhase 'Door_2_source' == 0) && ((player distance2D (this modelToWorld [1,2.2,-1])) < 2) && (driver this != player) && ((this getCargoIndex player) != 8)";
				statement = "this animateDoor ['Door_2_source', 1,false];";
			};

			class close_passenger_door: door_action {
				userActionID = 56;
				displayName = "Close Passenger Door";
				available = 1;
				condition = "(this animationPhase 'Door_2_source' == 1) && ((player distance2D (this modelToWorld [1,2.2,-1])) < 2) && (driver this != player) && ((this getCargoIndex player) != 8)";
				statement = "this animateDoor ['Door_2_source', 0,false];";
			};

			class open_side_door: door_action {
				userActionID = 57;
				displayName = "Open Side Door";
				available = 1;
				condition = "(this animationPhase 'Door_3_source' == 0) && ((player distance2D (this modelToWorld [1,1,-1])) < 2) && (driver this != player) && (!((this getCargoIndex player) in [0,8]))";
				statement = "this animateDoor ['Door_3_source', 1,false];";
			};

			class close_side_door: door_action {
				userActionID = 58;
				displayName = "Close Side Door";
				available = 1;
				condition = "(this animationPhase 'Door_3_source' == 1) && ((player distance2D (this modelToWorld [1,1,-1])) < 2) && (driver this != player) && (!((this getCargoIndex player) in [0,8]))";
				statement = "this animateDoor ['Door_3_source', 0,false];";
			};

			class open_back_door: door_action {
				userActionID = 59;
				displayName = "Open Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_4_source' == 0) && ((player distance2D (this modelToWorld [0,-3,-1])) < 2) && (!((this getCargoIndex player) in [9,10]))";
				statement = "this animateDoor ['Door_4_source', 1,false];";
			};

			class close_back_door: door_action {
				userActionID = 60;
				displayName = "Close Back Door";
				available = 1;
				condition = "(this animationPhase 'Door_4_source' == 1) && ((player distance2D (this modelToWorld [0,-3,-1])) < 2) && (!((this getCargoIndex player) in [9,10]))";
				statement = "this animateDoor ['Door_4_source', 0,false];";
			};
		};
	};
};
