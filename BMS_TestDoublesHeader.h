#include <stdint.h>
#define RAND_MAX UINT32_MAX

extern char* Test_ConsoleOutput;
extern int printf_Func_CallCount;


extern int ResetTestInterface();
extern int rand();
int printf(char* ConsoleOutput,char* ConsoleOutputValue)


