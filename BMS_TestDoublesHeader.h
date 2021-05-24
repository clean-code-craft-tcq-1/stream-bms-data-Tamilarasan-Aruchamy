#include <stdint.h>
#define RAND_MAX UINT32_MAX

extern char* ConsoleOutputFormat;
extern float ConsoleOutputTemperature;
extern float ConsoleOutputSOC;
extern int printf_Func_CallCount;


extern int ResetTestInterface();
extern int rand();
extern int printf(char* Format, float Temperature, float SOC);


