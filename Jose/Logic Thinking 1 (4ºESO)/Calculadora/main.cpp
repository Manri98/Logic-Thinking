#include <cstdlib>
#include <iostream>

using namespace std;

// DECLARACI�N DE FUNCIONES
void  introduce_operador();
void introduce_numeros();
double sumar(double acc, int num);


// DECLARACI�N DE VARIABLES
char op;
double acc;

int main()
{
    /* Pasos del programa:
             1. Preguntamos al usuario el tipo de operacion a realizar.
             2. Le pide la lista de n�meros que hay que operar.
             3. Envia el operador y los n�meros a la funci�n correspondiente.
             4. Muestra el resultado en la pantalla.
    */
     
     cout << "Que operaci�n quieres hacer?" << endl;
     cout << "    +: suma" << endl;
     cout << "    -: resta" << endl;
     cout << "    *: multiplicaci�n" << endl;
     cout << "    /: divisi�n" << endl;
     cin >> op;
    
     switch(op)
     {
              case '+':
                   acc = 0;
                   break;
              case '-':
                   acc = 0;
                   break;
              case '/':
                   acc = 1;
                   break;
              case '*':
                   acc = 1;
                   break;
     }
    introduce_numeros();
    
    system("PAUSE");
    return EXIT_SUCCESS;
    
}

void introduce_numeros()
{
    int num;
    double resultado;
    
    while(getchar() != 115) 
    {
            switch(op)
     {
              case '+':
                   acc = 0;
                   cin >> num;
                   acc = sumar(acc, num);
                   break;
              case '-':
                   acc = 0;
                   break;
              case '/':
                   acc = 1;
                   break;
              case '*':
                   acc = 1;
                   break;
     }
    }
    cout << "RESULTADO:" << acc << endl;
}
