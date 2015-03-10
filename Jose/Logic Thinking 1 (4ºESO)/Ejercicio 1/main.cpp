#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // Le preguntamos el numero con el que va a probar
    int numero;
    cout << "Dime un numero entre 0 y 1000" << endl;
    cin >> numero;
    // Elegimos el intervalo
    int n1;
    int n2;
    n1 = rand() % 1000;
    n2 = rand() % 1000;
    // Comprobamos si es válido
    if(numero>n1 && numero<n2)
    {
        cout << "GANASTE" << endl;
    }
    else
    {
        cout << "PERDISTE" << endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
