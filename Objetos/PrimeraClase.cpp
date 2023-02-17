#include <iostream>

using namespace std;
//Definiendo mi primera clase en c++
class Gato
{
public:
    //Definiendo atributos de la clase
    string Nombre;
    //Definiendo los contructores
    Gato()
    {
        Nombre="Felix";
    }
    Gato(string pNombre)
    {
        Nombre = pNombre;
    }
    //Definiendo los comportamientos o metodos
    void Meow()
    {
        cout << Nombre << " dice Meow " << endl;
    }
};
int main()
{
    //Creando mi primer objeto
    Gato miPrimerGato;
    cout << "Mi primer Objeto creado es un gato y se llama:  " << miPrimerGato.Nombre << endl;
    Gato miSegundoGato("Tom");
    cout << "Mi segundo Objeto creado es otro gato y se llama:  " << miSegundoGato.Nombre << endl;
    Gato miTercerGato("Firulais");
    cout << "Mi tercer Objeto creado es otro gato y se llama:  " << miTercerGato.Nombre << endl;
    cout << "Mi primer gato se comunica " << endl;
    miPrimerGato.Meow();
    miSegundoGato.Meow();
    miTercerGato.Meow();
    return 0;
}


