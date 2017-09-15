#include <iostream>
#include <string>
#include "TXLib.h"

//Nikita https://www.youtube.com/channel/UCkgs4bosZVc634LJu1lJhOQ

int main()
{
    std::string str;
    txCreateWindow(1280,720);
    std::cout << "Enter number from 1 to 5 (1-Car 2-Bus 3-Trolley-bus 4-Nothing 5-Nothing)" << std::endl;
    std::cin >> str;

    int n = std::atoi(str.c_str());

    HDC background_FromTXLibHelp;

    background_FromTXLibHelp = txLoadImage((n + ".bmp"));

    txBitBlt (txDC(), 0, 0, 1280, 720, background_FromTXLibHelp, 0, 0);
    txDeleteDC (background_FromTXLibHelp);

    return 0;
}
