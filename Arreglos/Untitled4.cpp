#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include <string.h>

using namespace std;

// Constantes
const int NUMERO_CANDIDATOS = 5;
const int NUMERO_ANIOS = 4;
const int MAX_CALIFICACION = 1000;
const int MIN_CALIFICACION = 0;


//Variables
int suma2;
float promedioGeneralPR, promedioGeneralPD, promedioGeneralPI;
int mayor, mayor1, mayor2;

// Funciones
void menuPrincipal();
void ingresovotos();
void sumaIndividual();
int busquedaAleatorios(int minimo, int maximo);
void PartidoRepublicano();
void PartidoDemocrata();
void PartidoIndependiente();
void Votos();
void imprimirLineaMatriz();
void imprimirLineaMatriz2();
void imprimirMatrizPR(float PRMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1]);
void imprimirMatrizPD(float PDMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1]);
void imprimirMatrizPI(float PIMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1]);
void impresionResultadosvotos();
void promedioMayorPR();
void promedioMayorPD();
void promedioMayorPI();
void promedioGeneralPorPP();
void promedioGeneralmejorPP();

// Vectores y Matrices
string Partido Republicano [NUMERO_CANDIDATOS] = {"JOSE_ORELLANA","LUIS_SALGUERO","ERWIN_LUZ","CARLOS_FUENTES","ADAN_CORTEZ"};
string Partido Democrata[NUMERO_CANDIDATOS] = {"LESLI_ARIAS","ESTER_LOPEZ","JIMENA_CARDENAS","ROSA_MORALES","LUCIA_SOLIS"};
string Partido Independiente [NUMERO_CANDIDATOS] = {"JULIA_CHUN","EVA_DIAZ","JOSUE_PÉREZ","PABLO_MANSILLA","LINDA_FLORES"};
int PR[NUMERO_CANDIDATOS];
int sumaPR[NUMERO_CANDIDATOS];
int PD[NUMERO_CANDIDATOS];
int sumaPD[NUMERO_CANDIDATOS];
int PI[NUMERO_CANDIDATOS];
int sumaPI[NUMERO_CANDIDATOS];
float PRMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1];
float PDMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1];
float PIMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1];


int main()
{
    menuPrincipal();
    system("pause");
    return 0;
}
//Implementación de funciones
void menuPrincipal()
{
    int opciones;
    bool repetir = true; //Para que regrese a menú
    do
    {
        system("cls");
        cout << "\n\n\t\t\tPartidos Politicos" << endl;
        cout << "\t\t-------------------------------\n\n";
        cout << "\t1.Informacion de los Partidos Politicos " << endl;
        cout << "\t2. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
            system("cls");
            int a;
            cout << "\n\tIngrese \"1\" para continuar y \"2\" para salir: ";
            cin >> a;
            while (a == 1)
            {
                system ("cls");
                srand(time(NULL));
                ingresovotos();
                imprimirMatrizPR(PRMatriz);
                imprimirMatrizPD(PDMatriz);
                imprimirMatrizPI(PIMatriz);
                cout << endl;
                cout << "\t\tPartido con mas Votos " << endl << endl;
                promedioPR();
                promedioPD();
                promedioPI();
                cout << endl;
                cout << "\n\t\tPROMEDIO GENERAL: " << endl << endl;
                promedioGeneralPorPP();
                promedioGeneralmejorPP();
                impresionResultadosvotos();
                imprimirLineaMatriz2();
                cout << "\n\t¿Desea realizar otra prueba? \"1\" para continuar y \"2\" para salir: ";
                cin >> a;
            }
            break;
        case 2: repetir = false;
                break;
        }
    }while (repetir);
}
void ingresovotos()
{
    PR();
    PD();
    PI();
    votos();
    system("pause>nul");
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + (rand()%(MAX_CALIFICACION - MIN_CALIFICACION));
}

void PartidoRepublicano()
{
    for(int i = 0; i < NUMERO_CANDIDATOS; i++)
    {
        for (int x=0; x < 1; x++)
        {
            int numero = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            PR[i] = numero; //Se agrega numeros Random al vector
            PRMatriz[i][0] = PR[i];

            }
        }
}
void PartidoDemocrata()
{
    for(int i = 0; i < NUMERO_CANDIDATOS; i++)
    {
        for (int x=0; x < 1; x++)
        {
            int numero2 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            PD[i] = numero2; //Se agrega numeros Random al vector
            PDMatriz[i][0] = PD[i];

    }
  }
}
void PartidoIndependiente()
{
    for(int i = 0; i < NUMERO_CANDIDATOS; i++)
    {
        for (int x=0; x < 1; x++)
        {
            int numero3 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            PI[i] = numero3; //Se agrega numeros Random al vector
            PIMatriz[i][0] = PI[i];

        }
    }
}
void sumaIndividual()
{
        for(int i=0; i<NUMERO_ALUMNOS; i++)
    {
        sumaPR[i] = PR[i];
        sumaPD[i] = PD[i] ;
        sumaPI[i] = PI[i] ;
    }
}
void zona()
{
    sumaIndividual();
    for(int i=0; i < NUMERO_CANDIDATOS; i++)
    {
        for(int x=0; x<1; x++)
        {
            PRMatriz[i][4] = sumaPR[i]; //Se incluye loz valores de zona en la matriz
            PDMatriz[i][4] = sumaPD[i];
            PIMatriz[i][4] = sumaPI[i];
        }
    }
}
void imprimirLineaMatriz() //Formato de separación de información
{
    //Linea de separación para la matriz
    cout << ("+----------------------");
    for (int x=0; x < NUMERO_AÑOS + 1; x++)
    {
        cout << "-----------";
    }
    cout<< ("+\n");
}
void imprimirLineaMatriz2() //Formato de separación de información
{
    //Linea separaciones de matrices
    cout << ("+_______________________");
    for (int x=0; x < NUMERO_AÑOS + 1; x++)
    {
        cout << "___________";
    }
    cout<< ("+\n");
}
void imprimirMatrizPR(float PRMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1])
{
    cout << endl << "\t\t\t\tPARTIDO REPUBLICANO\n" << endl;
    imprimirLineaMatriz();
    cout << setw(20) << "CANDIDATO" << setw(10) << "|" << setw(5);
    cout << setw(7) << "2017" << setw(5) <<"|";
    cout << setw(7) << "2019" << setw(5) <<"|";
    cout << setw(7) << "2021" << setw(5) <<"|";
    cout << setw(8) << "2023" << setw(5) <<"|\n";

    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_CANDIDATOS; y++)
    {
        cout << setw(25) << PR[y] << setw(5) << "|" << setw(7);
        for (int x=0;x < NUMERO_AÑOS; x++)
            {
                int votos = PRMatriz[y][x];
                cout << setw(6) << votos << setw(6) << "|"; //Se imprime completamente la matriz
            }
        cout << endl;
        imprimirLineaMatriz();
    }
    imprimirLineaMatriz2();
}
void imprimirMatrizPD(float PDMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1])
{
    cout << endl << "\t\t\t\tpPARTIDO DEMOCRATA N\n" << endl;
    imprimirLineaMatriz();
    cout << setw(20) << "CANDIDATO" << setw(10) << "|" << setw(5);
    cout << setw(7) << "2017" << setw(5) <<"|";
    cout << setw(7) << "2019" << setw(5) <<"|";
    cout << setw(7) << "2021" << setw(5) <<"|";
    cout << setw(8) << "2023" << setw(5) <<"|\n";

    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_CANDIDATOS; y++)
    {
        cout << setw(25) << PD[y] << setw(5) << "|" << setw(7);
        for (int x=0;x < NUMERO_AÑOS; x++)
            {
                int Votos = administracionMatriz[y][x];
                cout << setw(6) << calificacion1 << setw(6) << "|"; //Se imprime completamente la matriz
            }
        cout << endl;
        imprimirLineaMatriz();
    for (int x=0; x < 3; x++)
    {
    cout << setw(7) << "2017" << setw(5) <<"|";
    cout << setw(7) << "2019" << setw(5) <<"|";
    cout << setw(7) << "2021" << setw(5) <<"|";
    cout << setw(8) << "2023" << setw(5) <<"|\n";

    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_CANDIDATOS; y++)
    {
        cout << setw(25) << PD[y] << setw(5) << "|" << setw(7);
        for (int x=0;x < NUMERO_AÑOS; x++)
            {
                int Votos = PDMatriz[y][x];
                cout << setw(6) << votos << setw(6) << "|"; //Se imprime completamente la matriz
            }
        cout << endl;
        imprimirLineaMatriz();
    }
    }
    imprimirLineaMatriz2();
}
void imprimirMatrizPI(float arquitecturaMatriz[NUMERO_CANDIDATOS+1][NUMERO_AÑOS+1])
{
   cout << endl << "\t\t\t\tPARTIDO INDEPENDIENTE \n" << endl;
    imprimirLineaMatriz();
    cout << setw(20) << "CANDIDATO" << setw(10) << "|" << setw(5);
    cout << setw(7) << "2017" << setw(5) <<"|";
    cout << setw(7) << "2019" << setw(5) <<"|";
    cout << setw(7) << "2021" << setw(5) <<"|";
    cout << setw(8) << "2023" << setw(5) <<"|\n";

    imprimirLineaMatriz();
    for (int y=0; y < NUMERO_CANDIDATOS; y++)
    {
        cout << setw(25) << PI[y] << setw(5) << "|" << setw(7);
        for (int x=0;x < NUMERO_AÑOS; x++)
            {
                int votos = PIMatriz[y][x];
                cout << setw(6) << votos << setw(6) << "|"; //Se imprime completamente la matriz
            }
        cout << endl;
        imprimirLineaMatriz();
    }
    imprimirLineaMatriz2();
}
void promedioMayorPR()
{
    for (int i=0; i<NUMERO_CANDIDATOS; i++)
    {
        if(sumaPR[i] > mayor)
        {
            mayor = sumaPR[i];
        }
    }
    cout << "\t\tPromedio mayor de PARTIDO REPUBLICANO: " << fixed << setprecision(2) << mayor << endl;
}
void promedioMayorPD()
{
    for (int i=0; i<NUMERO_CANDIDATOS; i++)
    {
        if(sumaPD[i] > mayor1)
        {
            mayor1 = sumaPD[i];
        }
    }
    cout << "\t\tPromedio mayor de PARTIDO DEMOCRATA: " << fixed << setprecision(2) << mayor1 << endl;
}
void promedioMayorPI()
{
    for (int i=0; i<NUMERO_CANDIDATOS; i++)
    {
        if(sumaPI[i] > mayor2)
        {
            mayor2 = sumaPI[i];
        }
    }
    cout << "\t\tPromedio mayor de PARTIDO INDEPENDIENTE: " << fixed << setprecision(2) << mayor2 << endl;
}
void promedioGeneralPorPP()
{
    float suma=0, suma1=0, suma2=0;
    for (int i=0; i<NUMERO_CANDIDATOS; i++)
    {
    suma += sumaPR[i];
    promedioGeneralPR = suma / NUMERO_CANDIDATOS;
    suma1 += sumaPD[i];
    promedioGeneralPD = suma1 / NUMERO_CANDIDATOS;
    suma2 += sumaPI[i];
    promedioGeneralPI = suma2 / NUMERO_CANDIDATOS;
    }
    cout << "\t\tPromedio General PARTIDO REPUBLICANO " << fixed << setprecision(2) << promedioGeneralPR << endl;
    cout << "\t\tPromedio General PARTIDO DEMOCRATA: " << fixed << setprecision(2) << promedioGeneralPD << endl;
    cout << "\t\tPromedio General PARTIDO INDEPENDIENTE: " << fixed << setprecision(2) << promedioGeneralPI << endl;
}
void impresionResultadosvotos()
{
    if (promedioGeneralPR > promedioGeneralPD && promedioGeneralPI)
    {
        cout << "\n\t\tLa facultad ganadora es: PARTIDO REPUBLICANO con " << mayor << endl;
    }
    else if (promedioGeneralAdmon > promedioGeneralInge && promedioGeneralArqui)
    {
        cout << "\n\t\tLa facultad ganadora es: PARTIDO DEMOCRATA con " << mayor1 << endl;
    }
    else if (promedioGeneralArqui > promedioGeneralInge && promedioGeneralAdmon)
    {
        cout << "\n\t\tLa facultad ganadora es: PARTIDO INDEPENDIENTE con " << mayor2 << endl;
    }
}
void promedioGeneralmejorPP()
{
    int promediopartidos= (promedioGeneralPR + promedioGeneralPD + promedioGeneralPI) / 3;
    cout << "\n\t\tEl promedio general de los partidos politicos es de: " << fixed << setprecision(2) << promediopartidos << endl;
