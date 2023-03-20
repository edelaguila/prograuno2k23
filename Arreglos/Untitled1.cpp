/*Se debe desarrollar un programa en C++:
i. Manejar  tres  (3)  matrices  (para  gestionar  campeonatos  o  ligas  de  cualquier
deporte, por ejemplo: Liga Nacional, Liga de Ascenso, Liga Segunda
Divisi�n, Liga Metropolitana, etc).
ii. Las puntuaciones se generar�n aleatoriamente y corresponder�n a los a�os :
2010,  2011,  2012  y  2014  y  tendr�n  un  l�mite  de  50  puntos.   Se  deber�n
calcular 5 equipos por cada campeonato o liga.
iii. Deber�n  desplegarse  los  datos  detallados  de  cada  campeonato  o  liga  y  los
promedios solicitados.
iv. El programa deber� calcular el nombre, la puntuaci�n m�s alta, la puntuaci�n
m�s baja y el promedio en el campeonato o liga.
v. El  programa  deber�  identificar  quien  es  el  mejor  campeonato  o  liga  y  el
promedio obtenido.
vi. El proceso deber� llevarse a cabo a trav�s de un ciclo WHILE cuantas veces se desee. */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int NUM_LIGAS = 3;
const int NUM_ANIOS = 4;
const int NUM_EQUIPOS = 5;
const int MAX_PUNTUACION = 50;

// Estructura para almacenar informaci�n de un equipo
struct Equipo {
    string nombre;
    int puntuaciones[NUM_ANIOS];
    int max_puntuacion;
    int min_puntuacion;
    float promedio;
};

// Funci�n para generar una puntuaci�n aleatoria
int generar_puntuacion() {
    return rand() % (MAX_PUNTUACION + 1);
}

// Funci�n para calcular el promedio de un conjunto de puntuaciones
float calcular_promedio(int puntuaciones[], int num_puntuaciones) {
    int suma = 0;
    for (int i = 0; i < num_puntuaciones; i++) {
        suma += puntuaciones[i];
    }
    return static_cast<float>(suma) / num_puntuaciones;
}

int main() {
    srand(time(nullptr));

    Equipo ligas[NUM_LIGAS][NUM_EQUIPOS];

    // Generar datos aleatorios para cada equipo de cada liga
    for (int i = 0; i < NUM_LIGAS; i++) {
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            Equipo& equipo = ligas[i][j];
            equipo.nombre = "Equipo " + to_string(j+1);
            for (int k = 0; k < NUM_ANIOS; k++) {
                equipo.puntuaciones[k] = generar_puntuacion();
            }
            equipo.max_puntuacion = *max_element(equipo.puntuaciones, equipo.puntuaciones + NUM_ANIOS);
            equipo.min_puntuacion = *min_element(equipo.puntuaciones, equipo.puntuaciones + NUM_ANIOS);
            equipo.promedio = calcular_promedio(equipo.puntuaciones, NUM_ANIOS);
        }
    }

    // Desplegar datos detallados de cada campeonato o liga y los promedios solicitados
    for (int i = 0; i < NUM_LIGAS; i++) {
        cout << "Liga " << i+1 << ":" << endl;
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            Equipo& equipo = ligas[i][j];
            cout << "- " << equipo.nombre << ":" << endl;
            for (int k = 0; k < NUM_ANIOS; k++) {
                cout << "  - " << 2010 + k << ": " << equipo.puntuaciones[k] << endl;
            }
            cout << "  - Puntuaci�n m�xima: " << equipo.max_puntuacion << endl;
            cout << "  - Puntuaci�n m�nima: " << equipo.min_puntuacion << endl;
            cout << "  - Promedio: " << equipo.promedio << endl;
        }
    }

    // Identificar el mejor campeonato o liga y el promedio obtenido
    float mejor_promedio = -1;
    int mejor_liga = -1;
    for (int i = 0; i < NUM_LIGAS; i++) {
        float promedio_liga = 0;
        for (int j = 0; j < NUM_EQUIPOS; j++) {
            promedio_liga = 0;
        }
    }
}
