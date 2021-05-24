#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "SignalProvider.h"
#include "BMS_TestDoublesHeader.h"
#include<stddef.h>
#include<string.h>

extern int BSM_SignalProvider(OutputTarget OutputTargetIndex);

TEST_CASE("Print in Console") {
		float Temp_RandNum_Min=-30.0;
	float Temp_RandNum_Max=50.0;
	
	
  REQUIRE(BSM_SignalProvider(TO_CONSOLE)==0);
  REQUIRE(strcmp(ConsoleOutputFormat,"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	

  REQUIRE(ConsoleOutputTemperature==(float)((((float)(RAND_MAX-100)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
 
}
