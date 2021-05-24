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
	REQUIRE(strcmp(ConsoleOutputFormat[0],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
  	REQUIRE(strcmp(ConsoleOutputFormat[1],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
  	REQUIRE(strcmp(ConsoleOutputFormat[2],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
  	REQUIRE(strcmp(ConsoleOutputFormat[3],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[4],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[5],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[6],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[7],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[8],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[9],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[10],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[11],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[12],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[13],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(strcmp(ConsoleOutputFormat[14],"{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n")==0);
	REQUIRE(ConsoleOutputTemperature[0]==(float)((((float)(0)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[1]==(float)((((float)(1)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[2]==(float)((((float)(2)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[3]==(float)((((float)(3)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[4]==(float)((((float)(4)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[5]==(float)((((float)(5)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[6]==(float)((((float)(6)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[7]==(float)((((float)(7)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[8]==(float)((((float)(RAND_MAX-7)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[9]==(float)((((float)(RAND_MAX-6)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[10]==(float)((((float)(RAND_MAX-5)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[11]==(float)((((float)(RAND_MAX-4)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[12]==(float)((((float)(RAND_MAX-3/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[13]==(float)((((float)(RAND_MAX-2)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
	REQUIRE(ConsoleOutputTemperature[14]==(float)((((float)(RAND_MAX-1)/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min));
 }
