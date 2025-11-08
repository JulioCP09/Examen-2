// Examen #2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ListaDoble.h"
using namespace std;

int main()
{
    //Crear la lista
    ListaDoble lista;

    //Variables
    bool Continuar = true;
    string Respuesta = "Si";
    int dato = 0;

    //Llenar la lista
    while (Continuar)
    {
        cout << "Ingrese Dato" << endl;
        cin >> dato;
        lista.Insertar(dato);
        cout << "Desea continuar? Si/No" << endl;
        cin >> Respuesta;

        if (Respuesta == "No" || Respuesta == "no")
        {
            Continuar = false;
        }
        else
        {
            Continuar = true;
        }
    }
    //Mostrar la lista
    lista.Mostrar();

	//Mostrar el nodo con menor valor
	lista.NodoMenorValor();

	//Mostrar el nodo con mayor valor
    lista.NodoMayorValor();

	//Mostrar numeros pares e impares
    lista.MostrarNumerosParesEImpares();
}


