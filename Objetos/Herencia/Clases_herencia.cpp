#include <iostream>

using namespace std;
class Mago
{
public:
    Mago(int cantidadPoder, int cantidadVida, string nombre)
    {
        mCantidadPoder = cantidadPoder;
        mCantidadVida = cantidadVida;
        mNombre = nombre;
    }
    int getVida()
    {
        return mCantidadVida;
    }
    string getNombre()
    {
        return mNombre;
    }
protected:
    int mCantidadPoder, mCantidadVida;
    string mNombre;
};
class MagoHielo : public Mago
{
public:
    MagoHielo(int cantidadPoder, int cantidadVida, string nombre): Mago(cantidadPoder, cantidadVida, nombre)
    {
        mCantidadPoder = cantidadPoder + 1;
        mCantidadVida = cantidadVida + 1;
        mNombre = nombre;
    }
};
class MagoFuego : public Mago
{
public:
    MagoFuego(int cantidadPoder, int cantidadVida, string nombre): Mago(cantidadPoder, cantidadVida, nombre)
    {
        mCantidadPoder = cantidadPoder;
        mCantidadVida = cantidadVida + 100;
        mNombre = nombre;
    }
};
int main()
{
    Mago Gandalf(11, 100, "Gandalf");
    cout << " El nombre del mago es: " << Gandalf.getNombre() << endl;
    cout << " La cantidad de vida del Mago " << Gandalf.getNombre() << " es: " << Gandalf.getVida() << endl;
    MagoHielo Dumbledore(11,100,"Dumbledore");
    cout << " El nombre del mago es: " << Dumbledore.getNombre() << endl;
    cout << " La cantidad de vida del Mago de Hielo " << Dumbledore.getNombre() << " es: " << Dumbledore.getVida() << endl;
    MagoFuego Harry(11,100,"Harry");
    cout << " El nombre del mago es: " << Harry.getNombre() << endl;
    cout << " La cantidad de vida del Mago de Fuego " << Harry.getNombre() << " es: " << Harry.getVida() << endl;

    return 0;
}
