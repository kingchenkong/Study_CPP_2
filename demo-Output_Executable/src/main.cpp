#include <iostream>
#include <cstdlib>

#include "Window.h"
#include "utils.h"

using namespace std;
using namespace utils;

Window *ptrWin1 = nullptr;

int main()
{
    // cout << "################## start ##################" << endl;
    printLine("################## start ##################");

    ptrWin1 = new Window("ptrWin1", 5, 21);
    ptrWin1->showMember();

    // cout << "################## end ##################" << endl;
    printLine("################## end ##################");
    delete ptrWin1;
    ptrWin1 = nullptr;
    system("pause");
    return 0;
}
