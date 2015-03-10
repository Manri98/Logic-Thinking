#include <cstdlib>
#include <iostream>

using namespace std;

//LO DECLARAMOS TODO PARA EVITAR PROBLEMAS
int fichas1;
int fichas2;
int borrar;

bool fichasexcesivas();
bool comprueba3();

void board(char square[]);
void actualiza_tablero(int pos, int player);
void actualiza_tablero2(int pos, int player);

//CREAMOS EL VECTOR QUE GUARDARA LAS FICHAS
char square[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
bool fin = false;

int main(int argc, char *argv[])
{
    board(square);
    
    int posicion;
    while (fin == false)
    {
          //COMPROBAMOS SI TIENE FICHAS PARA PONER
          if(fichas2 == 3)
          {
                     //SI NO LE QUEDAN FICHAS LE DICES QUE BORRE UNA
                cout << "LO SENTIMOS, YA NO TIENES MAS FICHAS, QUITA UNA" << endl;
                cout << "SELECCIONA LA CASILLA QUE QUIERES BORRAR" << endl;
                cin >> borrar;
                if (square[borrar] == 'O')
                {
                                   cout << "ESA NO LA PUEDES BORRAR" << endl;
                                   cin >> borrar;
                }
                if (square[borrar] != 'O')
                {
                    square[borrar] == ' ';
                } 
                fichas2 == fichas2--;
                actualiza_tablero2(borrar, 1);
          }
          //AHORA QUE YA TIENE FICHA LE DICES QUE LA PONGA
          cout << "Jugador 1, introduce una posicion: " ;
          cin >> posicion;
          if (square[posicion] == 'X' || square[posicion] == 'O')
          {
              cout << "AHI NO PUEDES PONERLA" << endl;
              cin >> posicion;
          }
          // ACTUALIZAR TABLERO
          actualiza_tablero(posicion, 1);
          // ACTUALIZA FICHAS
          fichas2++;
          // COMPROBAMOS LA CANTIDAD DE FICHAS QUE LE QUEDAN
          if (comprueba3() == true)
          {
                           cout << "GANA EL JUGADOR 1" << endl;
                           break;
          }
          //COMPROBAMOS SI TIENE FICHAS PARA PONER
          if(fichas1 == 3)
          {
                      //SI NO LE QUEDAN FICHAS LE DICES QUE BORRE UNA
                cout << "LO SENTIMOS, YA NO TIENES MAS FICHAS, QUITA UNA" << endl;
                cout << "SELECCIONA LA CASILLA QUE QUIERES BORRAR" << endl;
                cin >> borrar;
                if (square[borrar] == 'X')
                {
                                   cout << "ESA NO LA PUEDES BORRAR" << endl;
                                   cin >> borrar;
                }
                if (square[borrar] != 'O')
                {
                    square[borrar] == ' ';
                } 
                square[borrar] == ' ';
                fichas1 == fichas1--;
                actualiza_tablero2(borrar, 2);
          }
          //AHORA QUE YA TIENE FICHA LE DICES QUE LA PONGA
          cout << "Jugador 2, introduce una posicion: " ;
          cin >> posicion;
          if (square[posicion] == 'X' || square[posicion] == 'O')
          {
              cout << "AHI NO PUEDES PONERLA" << endl;
              cin >> posicion;
          }
          // ACTUALIZAR TABLERO
          actualiza_tablero(posicion, 2);
          // ACTUALIZA FICHAS
          fichas1++;
          // COMPROBAMOS LA CANTIDAD DE FICHAS QUE LE QUEDAN
          if (comprueba3() == true)
          {
                           cout << "GANA EL JUGADOR 2" << endl;
                           break;
          }
          
          
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void actualiza_tablero(int pos, int player)
{
     //COLOCAMOS LA FICHA SEGUN SEA UN JUGADOR U OTRO
     if (player == 1)
     {
               square[pos] = 'X';
     }
     else
     {
               square[pos] = 'O';
     }
     board(square);
}
void actualiza_tablero2(int pos, int player)
{
     //BORRAMOS LA FICHA SEGUN SEA UN JUGADOR U OTRO
     if (player == 1)
     {
               square[pos] = ' ';
     }
     else
     {
               square[pos] = ' ';
     }
     board(square);
}
//COMPROBAMOS SI TIENE 3 EN RAYA
bool comprueba3()
{
     if(square[1] == square[4, 7] && square[1] != ' ')
     {
                  return true;
     }
     else if(square[1] == square[5] && square[1] == square[9] && square[1] != ' ')
     {
                  return true;
     }
     else if(square[1] == square[2] && square[1] == square[3] && square[1] != ' ')
     {
                  return true;
     }
     else if(square[3] == square[6] && square[3] == square[9] && square[3] != ' ')
     {
                  return true;
     }
     else if(square[3] == square[5] && square[3] == square[7] && square[3] != ' ')
     {
                  return true;
     }
     else if(square[4] == square[5] && square[4] == square[6] && square[4] != ' ')
     {
                  return true;
     }
     else if(square[7] == square[8] && square[7] == square[9] && square[7] != ' ')
     {
                  return true;
     }
     else if(square[2] == square[5] && square[2] == square[8] && square[2] != ' ')
     {
                  return true;
     }
     // CONVIENE PONER UN CASO POR DEFECTO
     return false;
}
