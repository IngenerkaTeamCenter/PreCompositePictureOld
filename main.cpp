#include <iostream>
#include "TXLib.h"

using namespace std;
//Nikita   https://www.youtube.com/channel/UCkgs4bosZVc634LJu1lJhOQ
int main()
{
    char str [20];
    txCreateWindow(1280,720);
    cout << "ВВЕДИТЕ ЦИФРУ от 1-5 (1-Машина 2-Автобус 3-Троллейбус 4-Ничего 5-Ниего)" <<endl;
    cin >> str;

    HDC background_FromTXLibHelp;

    if (strcmp(str, "1")== 0) {
        background_FromTXLibHelp = txLoadImage ("1.bmp");
    } else if (strcmp(str, "2")== 0) {
        background_FromTXLibHelp = txLoadImage ("2.bmp");
    } else if (strcmp(str, "3")== 0) {
        background_FromTXLibHelp = txLoadImage ("3.bmp");
    } else if (strcmp(str, "4")== 0) {
        background_FromTXLibHelp = txLoadImage ("4.bmp");
    } else if (strcmp(str, "5")== 0) {
        background_FromTXLibHelp = txLoadImage ("5.bmp");
    }


    txBitBlt (txDC(), 0, 0, 1280, 720, background_FromTXLibHelp, 0, 0);
    txDeleteDC (background_FromTXLibHelp);


    return 0;
}
