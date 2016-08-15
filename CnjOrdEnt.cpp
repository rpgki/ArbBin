/* 
 * File:   CnjOrdEnt.cpp
 * Author: a76326
 * 
 * Created on 11 de agosto de 2016, 03:32 PM
 */

#include "CnjOrdEnt.h"

CnjOrdEnt::CnjOrdEnt():raiz(nullptr) {
}

CnjOrdEnt::CnjOrdEnt(const CnjOrdEnt& orig) {
}

CnjOrdEnt::~CnjOrdEnt() {
}

bool CnjOrdEnt::buscar(int x){
    bool rsl = false; //Se inicializa el resultado como falso.
    shared_ptr<Ndo> p = raiz; //Se crea un apuntador p igual al nodo raiz.
    int r = raiz->dato; //Se guarda en la variable r el dato asociado a la raiz del arbol.
    while(raiz != nullptr && p != nullptr && rsl != true){ //Mientras la raiz o el apuntador p no sean nulos y el resultado sea false se ejecuta el ciclo
        if(r == x){
            rsl = true; // Cuando se encuentra el dato en el arbol se asigna como verdadero el resultado.
	    p = nullptr; // Al encontrarse el resultado se asigna p como un apuntador nulo.
        }else if(x < r){
		p = p->hiz; // En caso que el valor sea menor al dato, se asigna a p el apuntador al hijo de la izquierda.
		if(p != nullptr)
			r = p->dato; // Se actualiza r con el dato apuntado por el hijo de la izquierda.
            } else
                if(x > r){
		    p = p->hde; // En caso que el valor sea mayor al dato, se asigna a p el apuntador al hijo de la derecha.
		    if(p != nullptr)
			r = p->dato; // Se actualiza r con el dato apuntado por el hijo de la derecha.                    
                }
    }
    return rsl;
}

void CnjOrdEnt::insertarOrd(int x){
	int rsl; //Esta variable se crea para identificar si el número se ingresa en el hijo de la izquierda o el de la derecha
	shared_ptr<Ndo> aux = raiz; //Se hace un puntero con los mismos datos que la raíz
	shared_ptr<Ndo> ant = nullptr; //Se inicializa un puntero nulo que servirá para guardar los datos del nodo anterior
	if (raiz == nullptr){ //Si la raíz no tiene datos, entonces se inserta x
		raiz = shared_ptr<Ndo> (new Ndo(x));
	}
	else{ //Si ya existe el dato en la raíz entonces se inserta el resto de números en el árbol
		while(aux != nullptr){ //Mientras el puntero auxiliar no sea nulo, es decir, mientras se recorra el árbol
			if(aux->dato == x){ //El dato ya existe
				aux = nullptr;
				cout << "El dato ya existe" << endl;
			}
			else {
				if( x < aux->dato){ //Se pregunta si este es menor para ser insertado en el hijo izquierdo
					ant = aux; //Se copian los datos del auxiliar en el puntero anterior
					aux = ant->hiz; //El puntero auxiliar apunta al hijo izquierdo
					rsl = 1; //El resultado igual a 1 significa que el dato será insertado en el hijo de la izquierda
				}
				else {
					ant = aux; //Se copian los datos del auxiliar en el puntero anterior
					aux = ant->hde; //El puntero auxiliar apunta al hijo derecho
					rsl = 0; //El resultado igual a 0 significa que el dato será insertado en el hijo de la derecha
				}
			}				
		}
		if(aux == nullptr && rsl == 1){ //Si el dato será insertado en el hijo de la izquierda
			aux = ant->hiz; //El auxiliar apunta al hijo de la izquierda
			ant->hiz = shared_ptr<Ndo> (new Ndo(x)); //Se inserta el dato en el hijo de la izquierda
			ant->hiz->hiz = aux;
		} else{
			aux = ant->hde; //El auxiliar apunta al hijo de la derecha
			ant->hde = shared_ptr<Ndo> (new Ndo(x)); //Se inserta el dato en el hijo de la derecha
			ant->hde->hde = aux;
		}
	}
	cout << "El dato fue ingresado satisfactoriamente" << endl;
}

bool CnjOrdEnt::eliminar(int x){    
}