#include <iostream>
<<<<<<< HEAD

=======
#include "jugador.h"
//#include "celdas.h"
//#include "mapajuego.h"
>>>>>>> agregando_controles

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

