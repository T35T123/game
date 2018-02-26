#include <iostream>
#include <windows.h>
#include "../Constans/TerminalFontColor.h"s

class TerminalColorHelper {

    private:

        HANDLE consoleHandle;


    public:

        TerminalColorHelper();

        printlnWithColor(std::string text, TerminalFontColor color);

        printWithColor(std::string text, TerminalFontColor color);

};
