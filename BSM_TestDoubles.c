#include "SignalProvider.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <limits.h>

#define RAND_MAX INT_MAX

int rand();
int printf(char* Format, float Temperature, float SOC);

char* ConsoleOutputFormat=NULL;
float ConsoleOutputTemperature=NULL;
float ConsoleOutputSOC=NULL;
int printf_Func_CallCount=0;



int ResetTestInterface()
{

ConsoleOutputFormat=NULL;
ConsoleOutputTemperature=NULL;
ConsoleOutputSOC=NULL;
printf_Func_CallCount=0;

return 0;
}

int rand()
{ 
	int Rand_Temperature[15]={0,1,2,3,4,5,6,7,RAND_MAX-7,RAND_MAX-6,RAND_MAX-5,RAND_MAX-4,RAND_MAX-3,RAND_MAX-2,RAND_MAX-1};
	int Rand_SOC[15]={0,1,2,3,4,5,6,7,RAND_MAX-7,RAND_MAX-6,RAND_MAX-5,RAND_MAX-4,RAND_MAX-3,RAND_MAX-2,RAND_MAX-1};
	
	int RandomValue=0;
	for(static int Itr=0;Itr<30;Itr++)
	{
		if(!(Itr%2))
		{
			RandomValue=Rand_Temperature[14];
		}
		else
		{
			RandomValue=Rand_SOC[14];
		}
	}
	return RandomValue;
}

int printf(char* Format, float Temperature, float SOC)
{
	ConsoleOutputFormat=Format;
	ConsoleOutputTemperature=Temperature;
	ConsoleOutputSOC=SOC;

	printf_Func_CallCount++;
	return 0;
}

