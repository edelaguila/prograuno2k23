#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct datosPersona
    {
        string nombre;
        char  inicial;
        int   edad;
        float nota;
    };

    datosPersona persona;

    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout << "La edad de la persona 1 es " << persona.edad << endl;
    datosPersona persona1;
    persona1.nombre = "Carlos";
    persona1.inicial = 'C';
    persona1.edad = 23;
    persona1.nota = 10.0;
    cout << "La edad de la persona 2 es " << persona1.edad << endl;
    return 0;
}
