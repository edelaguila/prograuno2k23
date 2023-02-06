//Fecha creeación: 6 feb 2023 - autor: daguilae
//Este programa tienen como objetivo mostrar el uso de funciones a traves de una calculadora
#include <iostream>
#include <cstdlib>

using namespace std;

//Definición de prototipos
void sumar();
void restar();
void multiplicar();
void dividir();

int main() {
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Calculadora" << endl;
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
    return 0;
}
//Implementación de funciones
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
