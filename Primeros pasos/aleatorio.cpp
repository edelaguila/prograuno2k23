#include <iostream>
#include <cstdlib>
using namespace std;
#define MAXIMA_CALIFICACION 100
#define MINIMA_CALIFICACION 0
int main()
{
    int minimo = MINIMA_CALIFICACION;
    int maximo = MAXIMA_CALIFICACION;
    int aleatorio = 0;
    int i;
    aleatorio = minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
    cout << "numero aleatorio: " << aleatorio << endl;
    cin >> i;
    return 0;
}
