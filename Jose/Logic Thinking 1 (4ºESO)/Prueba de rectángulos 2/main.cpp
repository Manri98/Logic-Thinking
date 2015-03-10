#include <cstdlib>
#include <iostream>
#include "rectangulo.h"

using namespace std;

void compara(Rectangulo rec1, Rectangulo rec2);

int main(int argc, char *argv[])
{
    Rectangulo rec1;
    rec1.base = 10;
    rec1.altura = 5;
    rec1.color = "rojo";
    
    Rectangulo rec2;
    rec2.base = 20;
    rec2.altura = 10;
    rec2.color = "verde";
    
    Triangulo tri1;
    tri1.base = 8;
    tri1.lados = 7;
    
    cout << "El area del 1 es: " << rec1.area() << endl;
    cout << "La diagonal del 1 es: " << rec1.diagonal() << endl;
    cout << "El uno es de color rojo" << endl << endl;
    
    cout << "El area del 2 es: " << rec2.area() << endl;
    cout << "La diagonal del 2 es: " << rec2.diagonal() << endl;
    cout << "El 2 es verde" << endl << endl;
    
    cout << "La base del triangulo mide: " << tri1.base << endl;
    cout << "Los lados del triangulo miden: " << tri1.lados << endl;
    cout << "La altura del triángulo mide: " << tri1.alturatri() << endl;
    cout << "El área del triángulo es: " << tri1.area() << endl << endl;
    
    compara(rec1, rec2);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void compara(Rectangulo rec1, Rectangulo rec2)
{
     if(rec1.area() > rec2.area())
     {
                    cout << "El rojo es mas grande" << endl << endl;
     }
     if(rec1.area() == rec2.area())
     {
                    cout << "Ambos son iguales" << endl << endl;
     }
     if(rec1.area() < rec2.area())
     {
                    cout << "El verde es mas grande" << endl << endl;
     }
     if(rec1.diagonal() > rec2.diagonal())
     {
                    cout << "La diagonal del rojo es la mayor" << endl << endl;
     }
     if(rec1.diagonal() == rec2.diagonal())
     {
                    cout << "Las diagonales son iguales" << endl << endl;
     }
     if(rec1.diagonal() < rec2.diagonal())
     {
                    cout << "La diagonal del verde es la mayor" << endl << endl;
     }
}
