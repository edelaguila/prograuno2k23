#include <iostream>
#include <string>
using namespace std;

struct fechaNacimiento
{
    int  dia;
    int  mes;
    int anyo;
};

struct datosPersona
{
    string nombre;
    char  inicial;
    struct fechaNacimiento fechaExactaNacimiento;
    float nota;
};

int main()
{
    datosPersona persona;

    persona.nombre = "Ignacio";
    persona.inicial = 'I';
    persona.fechaExactaNacimiento.mes = 1;
    persona.fechaExactaNacimiento.dia = 25;
    persona.fechaExactaNacimiento.anyo = 2023;
    persona.nota = 7.5;
    cout << "La nota es " << persona.nota << endl;
    cout << "persona: " << persona.nombre;

    return 0;
}
