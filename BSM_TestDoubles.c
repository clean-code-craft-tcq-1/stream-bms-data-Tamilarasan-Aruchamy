#include "SignalProvider.h"
#include <stddef.h>

#define UNIT_TEST

char* Test_ConsoleOutput=NULL;
int printf_Func_CallCount=0;



int ResetTestInterface()
{

Test_ConsoleOutput=NULL;
printf_Func_CallCount=0;
	
}

int Rand()
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
			RandomValue=32767-Itr;
		}
	}
	return RandomValue;
}


int printf(char* ConsoleOutput)
{
	Test_ConsoleOutput=ConsoleOutput;
	printf_Func_CallCount++;
	return 1;
}

