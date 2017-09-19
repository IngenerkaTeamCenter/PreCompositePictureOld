#include "TXLib.h"

using namespace std;

int main()
{
    char str[20];

    txCreateWindow(800, 600);

    cout << "Введите цифру" << endl;

    cin >> str;

    HDC background_ForProject;

    if (strcmp(str, "1")==0)
    {
        background_ForProject=txLoadImage("H:\\main3\\1.bmp");
    }
    else if (strcmp(str, "2")==0)
    {
        background_ForProject=txLoadImage("2.bmp");
    }
    else if (strcmp(str, "3")==0)
    {
        background_ForProject=txLoadImage("3.bmp");
    }

    txBitBlt(txDC(),0,0,80,20,background_ForProject,0,0);

    txDeleteDC(background_ForProject);



    return 0;
}
