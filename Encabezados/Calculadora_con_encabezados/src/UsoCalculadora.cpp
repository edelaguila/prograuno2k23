#include "UsoCalculadora.h"
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
void menuOperacionesExtendidas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Extendidas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Factorial" << endl;
        cout << "\t2. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                factorial();
                break;
        case 2: repetir = false;
                break;
        }
    } while (repetir);
}
void menuOperacionesBasicas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Basicas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Sumar dos números" << endl;
        cout << "\t2. Restar dos números" << endl;
        cout << "\t3. Multiplicar dos números" << endl;
        cout << "\t4. Dividir dos números" << endl;
        cout << "\t5. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                sumar();
                break;
        case 2:
                restar();
                break;
        case 3:
                multiplicar();
                break;
        case 4:
                dividir();
                break;
        case 5: repetir = false;
                break;
        }
    } while (repetir);
}
void menuPrincipal()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMENU CALCULADORA" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Operaciones Basicas" << endl;
        cout << "\t2. Operaciones Extendidas" << endl;
        cout << "\t3. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                menuOperacionesBasicas();
                break;
        case 2:
                menuOperacionesExtendidas();
                break;
        case 3:
                repetir = false;
                break;
        }
    } while (repetir);
}
void factorial()
{
    system("cls");
    int numeroIngresado, i;
    float resultadoFactorial;
    cout << "\n\tCalculo del Factorial" << endl;
    cout << "\t\t\t-----------------" << endl;
    cout << "\n\tIngrese Número: ";
    cin >> numeroIngresado;
    resultadoFactorial = 1;
    for (i=1; i <= numeroIngresado; i++)
    {
        resultadoFactorial = resultadoFactorial * i;
    }
    cout << "\t" << numeroIngresado << "! = " << resultadoFactorial << endl;
    system("pause>nul");
}
void sumar()
{
    int primerNumero, segundoNumero;
    float resultadoSumar;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoSumar = primerNumero + segundoNumero;
    cout << "\tResultado de la suma: " << resultadoSumar << endl;
    system("pause>nul");
}
void restar()
{
    int primerNumero, segundoNumero;
    float resultadoRestar;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRestar = primerNumero - segundoNumero;
    cout << "\tResultado de la resta: " << resultadoRestar << endl;
    system("pause>nul");
}
void multiplicar()
{
    int primerNumero, segundoNumero;
    float resultadoMultiplicar;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoMultiplicar = primerNumero * segundoNumero;
    cout << "\tResultado de la multiplicacion: " << resultadoMultiplicar << endl;
    system("pause>nul");
}
void dividir()
{
    int primerNumero, segundoNumero;
    float resultadoDividir;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    if (segundoNumero == 0)
    {
        cout << "\tSegundo numero no puede ser cero (0) ERROR" << endl;
    } else
    {
        resultadoDividir = primerNumero / segundoNumero;
        cout << "\tResultado de la division: " << resultadoDividir << endl;
    }
    system("pause>nul");
}
