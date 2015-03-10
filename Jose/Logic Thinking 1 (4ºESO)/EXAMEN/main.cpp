#include <cstdlib>
#include <iostream>

using namespace std;

int x1, x2, y1, y2;

int main(int argc, char *argv[])
{
    cout << "Dime la x del punto A" << endl;
    cin >> x1;
    cout << "Dime la y del punto A" << endl;
    cin >> y1;
    cout << "Dime la x del punto B" << endl;
    cin >> x2;
    cout << "Dime la y del punto B" << endl;
    cin >> y2;
    if(y2 > y1 && x2 > x1) cout << "Creciente" << endl;
    if(y2 < y1) cout << "Decreciente" << endl;
    if(y1 = y2) cout << "Es horizontal" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
