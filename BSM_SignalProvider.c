#include <string.h>
#include "SignalProvider.h"

#ifdef UNIT_TEST
#include "BMS_TestDoublesHeader.h"
#else
#include <stdlib.h>
#include <stdio.h>
#endif


static float Read_TemperatureInDegC();
static float Read_SOC();
static OutputTarget sendToConsole(OutputSignalConfig OutputData);

static const OutputTargetConfig BSM_OutputTarget[Max_OutputTarget]={[TO_CONSOLE]={&sendToConsole}};

int BSM_SignalProvider(OutputTarget OutputTargetIndex)
{
	OutputSignalConfig OutputData={32767,32767};

	for(int i=0; i<15 ; i++)
	{
		OutputData.Temperature=Read_TemperatureInDegC();
		OutputData.SOC=Read_SOC();
		
		BSM_OutputTarget[OutputTargetIndex].sendTo(OutputData);
		
	}
	
return 0;
	
}

static float Read_TemperatureInDegC()
{
	float Temp_RandNum_Min=-30.0;
	float Temp_RandNum_Max=50.0;
	
	return (float)((((float)rand()/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min);
}

static float Read_SOC()
{
	float SOC_RandNum_Min=20.0;
	float SOC_RandNum_Max=50.0;
	
	return (float)((((float)rand()/RAND_MAX)*(SOC_RandNum_Max-SOC_RandNum_Min))+SOC_RandNum_Min);
}

static OutputTarget sendToConsole(OutputSignalConfig OutputData)
{

	printf("{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n",OutputData.Temperature,OutputData.SOC);
	return TO_CONSOLE;
}


