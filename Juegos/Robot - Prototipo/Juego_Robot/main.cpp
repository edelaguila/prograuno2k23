#include <iostream>
#include "jugador.h"
#include "mapa.h"

using namespace std;

int main()
{
    //aplicativo elaborado en el curso de Programaciòn I Universidad Mariano Galvez de Guatemala"
    bool finDeJuego = false;
    jugador heroe;
    mapa mapaDeJuego;
    while(finDeJuego==false)
    {
        heroe.manejoControles();
        mapaDeJuego.setJugadorEnCelda(heroe.getX(), heroe.getY());
        mapaDeJuego.dibujaMapa();
    }

    //cout << "Hola Mundo";
    return 0;
}

