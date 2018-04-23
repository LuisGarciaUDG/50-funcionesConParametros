/*
Programa_50

funciones con parametros con paso de valor.
Variables globales, prototipos, llamado de funciones automatico.
Suma y resta de dos números enteros.

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 23 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void suma (int x, int y);//prototipo
void resta (int x, int y);//prototipo
int n1, n2, resp;//variables globales

int main()
{
    cout<<"\n\tPrograma suma y resta";
    cout<<"\n\n\tDame un numero entero:   "; cin>> n1;
    cout<<"\n\n\tDame otro numero entero: "; cin>> n2;
    suma(n1,n2);
    resta(n1,n2);

    system ("cls");

    return 0;
}

void suma(int x, int y)
{
    cout<<"\n\tPrograma: La suma";
    resp=x+y;
    cout<<"\n\n\tEl resultado es: "<<resp<<"\n\n\t\t";
    system("pause");
}

void resta(int x, int y)
{
    cout<<"\n\tPrograma: La resta";
    resp=x-y;
    cout<<"\n\n\tEl resultado es: "<<resp<<"\n\n\t\t";
    system("pause");
}
