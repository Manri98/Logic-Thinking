#include <cstdlib>
#include <iostream>

using namespace std;

void board(char square[])
{
	system("cls");
	cout << "\n\n\t3 EN RAYA\n\n";

	cout << "Jugador 1 (X)  -  Jugador 2 (O)" << endl << endl;
	cout << endl;

	cout << "\t     |     |     " << endl;
	cout << "\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |     " << endl;

	cout << "\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "\t_____|_____|_____" << endl;
	cout << "\t     |     |     " << endl;

	cout << "\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "\t     |     |     " << endl << endl;
}
