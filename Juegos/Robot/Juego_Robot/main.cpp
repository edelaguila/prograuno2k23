#include <iostream>
#include "jugador.h"

using namespace std;

int main()
{
    //aplicativo elaborado en el curso de Programaciòn I Universidad Mariano Galvez de Guatemala"
    bool finDeJuego = false;
    jugador heroe;
    while(finDeJuego==false)
    {
        heroe.manejoControles();
    }

    //cout << "Hola Mundo";
    return 0;
}

