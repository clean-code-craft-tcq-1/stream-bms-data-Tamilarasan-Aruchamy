#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include <string.h>
#include "SignalProvider.h"

extern int BSM_SignalSender(OutputTarget OutputTargetIndex);

TEST_CASE("Print in Console") {
	
  REQUIRE(OutputTarget(TO_CONSOLE)==0); 

}