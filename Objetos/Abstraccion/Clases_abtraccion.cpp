#include <iostream>
using namespace std;

class Persona
{
public:
    int mEdad;
    Persona(int edadPersona)
    {
        mEdad = edadPersona;
    }
    void pensamientoPersona()
    {
        cout << obtenerPensamientos() << endl;
    }
private:
    int nivelSocial;
    int nivelInteligencia;
    int nivelSuerte;
    string obtenerPensamientos()
    {
        nivelSocial = 0;
        nivelInteligencia=10;
        nivelSuerte=100;
        if (nivelSocial + nivelSuerte > 100)
        {
            return "Estoy pensando algo muy bueno y me causa felicidad";
        }
        else if(nivelSuerte > nivelInteligencia)
        {
            return "Soy un suertudo";
        }
        else if (mEdad > 18)
        {
            return "Soy un adulto";
        }
        else
        {
            return "no estoy pensando nada";
        }
    }
};
int main()
{
    Persona Roberto(19);
    Roberto.pensamientoPersona();

    return 0;
}
