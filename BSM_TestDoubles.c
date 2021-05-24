#include "SignalProvider.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#define RAND_MAX UINT32_MAX

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
	static int Itr=0;
	int RandomValue=0;
	for(;Itr<15;Itr++)
	{
		if(!(Itr%2))
		{
			RandomValue=Itr;
		}
		else
		{
			RandomValue=RAND_MAX-Itr;
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

