#include <cstdlib>
#include <iostream>

using namespace std;

int calculaNotaMedia(int x[]);
int alumnos; 
int media;

int main(int argc, char *argv[])
{  
    // Preguntamos la cantidad de alumnos
    cout << "Cuantos alumnos tienes?" << endl;
    cin >> alumnos;
    
    // Creo la tabla donde guardaré las notas
    int tabla[alumnos];
    
    // 1.Pedir al usuario que introduzca las notas
    cout << "Introduce las notas de los alumnos" << endl;
    
    // 2.Hago buvle con cin
    for (int i =0; i <alumnos; i++)
    {
        cout << "Nota del alumno" << i << endl;
        cin >> tabla[i];
    }
    
    calculaNotaMedia(tabla);
    cout << "La media es:" << media << endl;
    
    system("PAUSE");
    return 0;
}
int calculaNotaMedia(int x[])
{
     int suma;
     int media;
     for (int i =0; i <alumnos; i++)
     {
         suma = suma + x[i];
     }
     media = suma/alumnos;
     return media;
}
