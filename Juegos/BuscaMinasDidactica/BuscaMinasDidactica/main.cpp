#include <iostream>
#include <unistd.h>
#include "Juego.h"

using namespace std;

int main()
{
    srand(getpid());
	int filasTablero = 9;
	int columnasTablero = 9;
	int minasEnTablero = 5;
	bool modoDesarrollador = true;

	Juego juego(Tablero(filasTablero, columnasTablero, modoDesarrollador), minasEnTablero);
	juego.iniciar();
    return 0;
}
