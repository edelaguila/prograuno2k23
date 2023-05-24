#ifndef JUGADOR_H
#define JUGADOR_H


class jugador
{
    public:
        jugador();
        void manejoControles();
        int getX();
        int getY();



    protected:

    private:
        int x, y;

};

#endif // JUGADOR_H
