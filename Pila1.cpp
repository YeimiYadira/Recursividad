//Pila
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Nodo{
	int Dato;
	Nodo *Siguiente;
};
void agregarPila (Nodo *&, int);
void eliminarPila (Nodo *&, int &);
int main(){
	int valor, datos;
	Nodo *pila=NULL;
	cout << "\t¿Cuantos datos va a insertar? ";
	cin >> datos;
	for (int i=0; i<datos; i++){
		cout << i+1 << ": ";
		cin >> valor;
		agregarPila(pila,valor);
	}
	cout << "Eliminar Pila" << endl;
	while (pila != NULL){
		eliminarPila(pila,valor);
		if (pila != NULL){
			cout << valor << ", ";
		}
		else {
			cout << valor << ".";
		}
	}
}
void 
agregarPila (Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->Dato = n;
	nuevo_nodo->Siguiente = pila;
	pila = nuevo_nodo;
	//Mostrar pila
	cout << "\t\"" << n <<"\"" << endl;
}
void eliminarPila (Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->Dato;
	pila = aux->Siguiente;
	delete aux;
}
