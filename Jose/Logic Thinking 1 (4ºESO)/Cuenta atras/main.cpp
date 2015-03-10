#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int min;
    int seg;
    cout << "introduce los minutos" << endl;
    cin >> min;
    cout << "introduce los segundos" << endl;
    cin >> seg;
    for (int i=min; i>-1; i--)
    {
        for (int j=seg; j>-1; j--)
        {
            cout << i << ":" << j << endl;
            Sleep(1000);
            system("cls");    
        }
        int seg=59;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
