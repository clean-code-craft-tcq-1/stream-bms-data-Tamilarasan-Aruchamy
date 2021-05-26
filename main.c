#include "SignalProvider.h"
extern int BSM_SignalProvider(OutputTarget OutputTargetIndex);
int main()
{
  BSM_SignalProvider(TO_CONSOLE);
  return 0;
}
