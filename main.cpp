#include <iostream>
#include "Util/TerminalColorHelper.h"

int main()
{

    TerminalColorHelper *helper = new TerminalColorHelper();
    helper->printWithColor("Hello", TerminalFontColor(BLUE));
    return 0;
}
