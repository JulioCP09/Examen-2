#include "ListaDoble.h"
#include <iostream>
using namespace std;

#pragma region Constructor
ListaDoble::ListaDoble() : head(nullptr)
{
}
#pragma endregion

#pragma region Metodo Insertar
void ListaDoble::Insertar(int valor)
{
	//Verificar si el valor ya existe en la lista
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		//Recorrer la lista
		if (actual->dato == valor)
		{
			//El valor ya existe
			cout << "El valor " << valor << " ya existe en la lista, no se permiten duplicados." << endl;
			return; // Salir del método sin insertar el valor duplicado
		}
		else
		{
			actual = actual->siguiente; //Avanzar al siguiente nodo
		}
	}
	//Crear el nuevo nodo
	NodoDoble* nuevo = new NodoDoble(valor);
	if (head != nullptr)//LISTA CONTIENE ELEMENTOS		
	{
		head->anterior = nuevo;
		nuevo->siguiente = head;
	}
	head = nuevo;

}
#pragma endregion

#pragma region Metodo Mostrar
void ListaDoble::Mostrar()
{
	NodoDoble* actual = head;
	while (actual != nullptr)
	{
		cout << actual->dato << " "; //Mostrar el dato del nodo actual
		//Mostrar las direcciones de memoria
		cout << "Direc actual" << actual << " ";
		cout << "Direc anterior" << actual->anterior << " ";
		cout << "Direc siguiente" << actual->siguiente << " ";
		cout << endl;
		actual = actual->siguiente; //Avanzar al siguiente nodo
	}
}
#pragma endregion

#pragma region Metodo NodoMenorValor
void ListaDoble::NodoMenorValor()
{
	NodoDoble* actual = head;
	NodoDoble* menor = head;
	while (actual != nullptr)
	{
		if (actual->dato < menor->dato)
		{
			menor = actual;
		}
		actual = actual->siguiente;
	}
	actual = head;
	int contador = 1;
	while (actual != nullptr)
	{
		if (actual == menor)
		{
			break;
		}
		contador++;
		actual = actual->siguiente;
	}
	cout << "El nodo en la posicion " << contador << " tiene el menor valor: " << menor->dato << endl;
}
#pragma endregion

#pragma region Metodo NodoMayorValor
void ListaDoble::NodoMayorValor()
{
	NodoDoble* actual = head;
	NodoDoble* mayor = head;
	while (actual != nullptr)
	{
		if (actual->dato > mayor->dato)
		{
			mayor = actual;
		}
		actual = actual->siguiente;
	}
	actual = head;
	int contador = 1;
	while (actual != nullptr)
	{
		if (actual == mayor)
		{
			break;
		}
		contador++;
		actual = actual->siguiente;
	}
	cout << "El nodo en la posicion " << contador << " tiene el mayor valor: " << mayor->dato << endl;
}
#pragma endregion