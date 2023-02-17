// Ejemplo de utilización de matrices codigo heredado de C
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA]);
int main()
{
    srand(getpid());
    float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1];
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos","Luis","Maria","Pedro","Juan"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, alumnos);
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            suma += (float)calificacion;
            matriz[y][x] = calificacion;
        }
        // Agregar promedio
        float promedio = suma / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedio;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_MATERIAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_MATERIAS];
    float promedioMenor = matriz[0][NUMERO_MATERIAS];
    char alumnoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAXIMA_LONGITUD_CADENA);

    imprimirMatrizLinea();
    cout << setw(9) << "Alumno";
    for (x = 0; x < NUMERO_MATERIAS; x++)
    {
        cout << setw(9) << "Cal" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_ALUMNOS; y++)
    {
        cout << "!" << setw(8) << alumnos[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    cout << "Promedio mayor: " << setw(10) << alumnoPromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor: " << setw(10) << alumnoPromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
}
