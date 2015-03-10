#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for (int sec=0; sec<60; sec++)
    {
        cout << sec << endl;
        Sleep(1000);
        system("cls");
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
