#include "../Util/TerminalColorHelper.h"

TerminalColorHelper::TerminalColorHelper() {

    TerminalColorHelper::consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

}

TerminalColorHelper::printWithColor(std::string text, TerminalFontColor color) {

    SetConsoleTextAttribute(TerminalColorHelper::consoleHandle, color);

    std::cout<<text;

    SetConsoleTextAttribute(TerminalColorHelper::consoleHandle, TerminalFontColor(DEFAULT));

}


TerminalColorHelper::printlnWithColor(std::string text, TerminalFontColor color) {

    TerminalColorHelper::printWithColor(text, color);
    std::cout<<std::endl;

}
