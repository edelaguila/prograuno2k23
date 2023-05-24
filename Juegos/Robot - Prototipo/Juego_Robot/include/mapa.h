#ifndef MAPA_H
#define MAPA_H
#include "celdaMapa.h"


class mapa
{
    public:
        mapa();

        celdaMapa celda [15][10];
        void dibujaMapa();
        void setJugadorEnCelda(int jugadorX, int jugadorY);

    protected:

    private:
};

#endif // MAPA_H
