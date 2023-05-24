#include "mapa.h"
#include <iostream>

using namespace std;

mapa::mapa()
{
    //ctor
}
void mapa::dibujaMapa()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << celda[i][j].id;
        }
        cout << endl;
    }

}
void mapa::setJugadorEnCelda(int jugadorX, int jugadorY)
{
    cout << "Las coordenadas del Jugador estan en " << jugadorX << " " << jugadorY << endl;
}


