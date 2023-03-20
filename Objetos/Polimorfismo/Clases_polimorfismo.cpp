#include <iostream>
using namespace std;
class Animal
{
public:
    void sonidoAnimal()
    {
        cout << "Los animales hacen sonidos" << endl;
    }
};
class Cerdo : public Animal
{
public:
    void sonidoAnimal()
    {
        cout << "El cerdo dice: wee wee " << endl;
    }
};
class Perro : public Animal
{
public:
    void sonidoAnimal()
    {
        cout << "El perro dice: bow bow " << endl;
    }
};
int main()
{
    Animal miAnimal;
    Cerdo miCerdo;
    Perro miPerro;

    miAnimal.sonidoAnimal();
    miCerdo.sonidoAnimal();
    miPerro.sonidoAnimal();
    return 0;
}
