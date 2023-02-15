#include <iostream>
using namespace std;
//#define CANTIDADNOTAS 5;
int main(){
    const int NUMERONOTAS = 5;
    string nombresAlumnos[NUMERONOTAS];
    double notasFisica[NUMERONOTAS];
    double notasMatematicas[NUMERONOTAS];
    for (int i = 0; i < NUMERONOTAS; i++)
    {
        cout << "Ingrese la nota: " << i + 1 << ":";
        cin >> notas[i];
    }
    double suma = 0;
    for (int i = 0; i < NUMERONOTAS; i++)
    {
        suma = suma + notas[i];
        cout << "Nota " << i + 1 << " Calificacion: " << notas[i] << endl;
    }
    double promedioNotas = suma / NUMERONOTAS;

    string letra = " ";
    if (promedioNotas == 100)
    {
        letra = "A";
    }
    else if (promedioNotas >= 80)
    {
        letra = "B";
    }
    else if (promedioNotas >= 70)
    {
        letra = "C";
    }
    else if (promedioNotas >= 60)
    {
        letra = "D";
    }
    else
    {
        letra = "E";
    }
    cout << "Total notas: " << suma << endl;
    cout << "Promedio notas: " << promedioNotas << endl;
    cout << "Por el promedio obtenido usted merece una: " << letra << endl;

    return 0;
}
