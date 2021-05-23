#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "SignalProvider.h"
#undef RAND_MAX
#include "BMS_TestDoublesHeader.h"
#include<stddef.h>
#include<string.h>

extern int BSM_SignalProvider(OutputTarget OutputTargetIndex);

TEST_CASE("Print in Console") {
	
  REQUIRE(BSM_SignalProvider(TO_CONSOLE)==0);



}
