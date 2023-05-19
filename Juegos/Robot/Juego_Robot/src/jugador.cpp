#include "jugador.h"
#include <iostream>

using namespace std;

jugador::jugador()
{
    x = 1;
    y = 1;
}
void jugador::manejoControles()
{
    char ingresoUsuario;
    cin >> ingresoUsuario;

    switch(ingresoUsuario)
    {
    case 'a':
        y = y - 1;
        cout << "El jugador se mueve hacia la izquierda" << endl;
        break;
    case 'd':
        y = y + 1;
        cout << "El jugador se mueve hacia la derecha" << endl;
        break;
    case 's':
        x = x + 1;
        cout << "El jugador se mueve hacia la abajo" << endl;
        break;
    case 'w':
        x = x - 1;
        cout << "El jugador se mueve hacia la arriba" << endl;
        break;
    case 'x':
        cout << "Juego Terminado" << endl;
        exit(0);
    }
    cout << "El jugador esta en el las coordenadas --> " << " X = " << x << " Y = " << y << endl;
}
int jugador::getX()
{
    return x;
}
int jugador::getY()
{
    return y;
}
