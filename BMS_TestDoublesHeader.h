#include <stdint.h>
#include "test/catch.hpp"

extern char* Test_ConsoleOutput;
extern int printf_Func_CallCount;


extern int ResetTestInterface();
extern int rand();
int printf(char* ConsoleOutputValue, float Temperature, float SOC);


