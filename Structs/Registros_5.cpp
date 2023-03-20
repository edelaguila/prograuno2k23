
#include <iostream>
#include <string>
using namespace std;

struct tipoDatos
{
    string nombreFich;        // Nombre del Archivo
    long tamanio;            // El tama�o en bytes
};

int numeroFichas=0;  // N�mero de fichas que ya tenemos
int i;               // Para bucles
int opcion;          // La opcion del menu que elija el usuario

string textoTemporal; // Para pedir datos al usuario
int numeroTemporal;

int main()
{
    tipoDatos *fichas = new tipoDatos[10];

    do
    {
        // Menu principal
        cout << "Menu Principal Archivos" << endl;
        cout << "Escoja una opci�n:" << endl;
        cout << "1.- A�adir datos de un nuevo Archivo" << endl;
        cout << "2.- Mostrar los nombres de todos los Archivos" << endl;
        cout << "3.- Mostrar Archivos que sean de mas de un cierto tama�o" << endl;
        cout << "4.- Ver datos de un Archivos" << endl;
        cout << "5.- Salir" << endl;

        cin >> opcion;

        // Hacemos una cosa u otra seg�n la opci�n escogida
        switch(opcion)
        {
            case 1: // A�adir un dato nuevo
                if (numeroFichas < 10)   // Si queda espacio
                {
                    cout << "Introduce el nombre del Archivo: ";
                    cin >> fichas[numeroFichas].nombreFich;
                    cout << "Introduce el tama�o en KB: ";
                    cin >> fichas[numeroFichas].tamanio;
                    numeroFichas++;  // Y tenemos una ficha m�s
                }
                else   // Si no hay espacio para m�s fichas, avisamos
                    cout << "M�ximo de fichas alcanzado (10)!" << endl;
                break;

            case 2: // Mostrar todos
                for (i=0; i<numeroFichas; i++)
                    cout << "Nombre: " << fichas[i].nombreFich
                        << "; Tama�o: " << fichas[i].tamanio
                        << "Kb" << endl;
                break;

            case 3: // Mostrar seg�n el tama�o
                cout << "�A partir de que tama�o quieres que te muestre? ";
                cin >> numeroTemporal;
                for (i=0; i<numeroFichas; i++)
                    if (fichas[i].tamanio >= numeroTemporal)
                        cout << "Nombre: " << fichas[i].nombreFich
                            << "; Tama�o: " << fichas[i].tamanio
                            << " Kb" << endl;
                break;

            case 4: // Ver todos los datos (pocos) de un Archivo
                cout << "�De qu� Archivo quieres ver todos los datos?";
                cin >> textoTemporal;
                for (i=0; i<numeroFichas; i++)
                    if (fichas[i].nombreFich == textoTemporal)
                        cout << "Nombre: " << fichas[i].nombreFich
                            << "; Tama�o: " << fichas[i].tamanio
                            << " Kb" << endl;
                break;

            case 5: // Salir: avisamos de que salimos
                cout << "Fin del programa" << endl;
                break;

            default: // Otra opcion: no v�lida
                cout << "Opci�n desconocida!" << endl;
                break;
        }
    } while (opcion != 5);  // Si la opcion es 5, terminamos

    return 0;
}
