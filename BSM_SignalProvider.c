#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SignalProvider.h"


static float Read_Temperature();
static float Read_SOC();
static OutputTarget sendToConsole(OutputSignalConfig OutputData);

static const OutputTargetConfig BSM_OutputTarget[Max_OutputTarget]={[TO_CONSOLE]={&sendToConsole}};

int main(OutputTarget OutputTargetIndex)
{
	OutputSignalConfig OutputData={32767,32767};
	int num=0;
	//scanf("%d",&num);
	//printf("%d\n",num);
	//for(int i=0; i<num ; i++)
		while(1)
	{
		OutputData.Temperature=Read_Temperature();
		OutputData.SOC=Read_SOC();
		
		BSM_OutputTarget[OutputTargetIndex].sendTo(OutputData);
		
	}
	
return 0;
	
}

static float Read_Temperature()
{
	float Temp_RandNum_Min=10.0;
	float Temp_RandNum_Max=50.0;
	
	return (float)((((float)rand()/RAND_MAX)*(Temp_RandNum_Max-Temp_RandNum_Min))+Temp_RandNum_Min);
}

static float Read_SOC()
{
	float SOC_RandNum_Min=1.0;
	float SOC_RandNum_Max=2.0;
	
	return (float)((((float)rand()/RAND_MAX)*(SOC_RandNum_Max-SOC_RandNum_Min))+SOC_RandNum_Min);
}

static OutputTarget sendToConsole(OutputSignalConfig OutputData)
{

	printf("{\"Temperature\":%f,\"SOC\":%f}\n",OutputData.Temperature,OutputData.SOC);
	return TO_CONSOLE;
}


