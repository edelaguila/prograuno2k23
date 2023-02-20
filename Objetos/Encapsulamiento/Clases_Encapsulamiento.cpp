#include <iostream>
using namespace std;
class Perro
{
public:
    string mLadrido;
    Perro(string Nombre, string tipoLadrido)
    {
        mLadrido = tipoLadrido;
        mNombre = Nombre;
    }
    string getNombre()
    {
        return mNombre;
    }
    void setNombre(string pNombre)
    {
        mNombre = pNombre;
    }
    void Ladrar()
    {
        cout << mLadrido << endl;
    }
private:
    string mNombre;
};
int main()
{
    Perro PerroUno("Bobby", "Ladrido1");
    cout << PerroUno.getNombre() << endl;
    PerroUno.setNombre("Neron");
    cout << PerroUno.getNombre() << endl;
    PerroUno.Ladrar();
    Perro PerroDos("Rudolf", "Ladrido2");
    cout << PerroDos.getNombre() << endl;
    PerroDos.setNombre("Lazzie");
    cout << PerroDos.getNombre() << endl;
    PerroDos.Ladrar();
    return 0;
}
