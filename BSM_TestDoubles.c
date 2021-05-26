#include "SignalProvider.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

#define RAND_MAX INT_MAX

int rand();
int printf(char* Format, float Temperature, float SOC);

char* ConsoleOutputFormat[15];
float ConsoleOutputTemperature[15];
float ConsoleOutputSOC[15];
int printf_Func_CallCount=0;



int ResetTestInterface()
{
printf_Func_CallCount=0;

return 0;
}

int rand()
{ 
	int Rand_Temperature[15]={0,1,2,3,4,5,6,7,RAND_MAX-7,RAND_MAX-6,RAND_MAX-5,RAND_MAX-4,RAND_MAX-3,RAND_MAX-2,RAND_MAX-1};
	int Rand_SOC[15]={0,1,2,3,4,5,6,7,RAND_MAX-7,RAND_MAX-6,RAND_MAX-5,RAND_MAX-4,RAND_MAX-3,RAND_MAX-2,RAND_MAX-1};
	
	static int Itr=0;
	int RandomValue=0;
	
	if(Itr>30){
		if(!(Itr%2))
		{
			RandomValue=Rand_Temperature[Itr/2];
			Itr++;
		}
		else
		{
			RandomValue=Rand_SOC[Itr/2];
			Itr++;
		}
	}
		
	else{
		Itr=0;
	}
	
	return RandomValue;
}

int printf(char* Format, float Temperature, float SOC)
{	
	static int MsgIndex=0;
	
	
	if(MsgIndex<15){
		ConsoleOutputFormat[MsgIndex]=Format;
		ConsoleOutputTemperature[MsgIndex]=Temperature;
		ConsoleOutputSOC[MsgIndex]=SOC;

		printf_Func_CallCount++;
	
		MsgIndex++;
	}
	else{
		MsgIndex=0;
	}
	return 0;
}

