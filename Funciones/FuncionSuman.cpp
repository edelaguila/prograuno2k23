#include <iostream>
using namespace std;
//Definicion de Prototipos de funcion
void saludar(void);
void mostrarResultado(int resultado);
int sumar(int a, int b);

int main()
{
    int resultado, a, b;
    saludar();
    cin>>a>>b;
    resultado = sumar(a,b);
    mostrarResultado(resultado);
    return 0;
}
//Implementacion de funciones
void saludar(void)
{
    cout<<"Hola, buenos dias. Ingresa dos numeros"<<endl;
    return;
}
void mostrarResultado(int resultado)
{
    cout<<"El resultado es: "<<resultado<<endl;
    return;
}
int sumar(int a, int b)
{
    return (a+b);
}
