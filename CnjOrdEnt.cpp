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
            rsl == true; // Cuando se encuentra el dato en el arbol se asigna como verdadero el resultado.
            p = nullptr; // Al encontrarse el resultado se asigna p como un apuntador nulo.
        }else 
            if(x < r){
		p = p->hiz; // En caso que el valor sea menor al dato, se asigna a p el apuntador al hijo de la izquierda.
                r = p->dato; // Se actualiza r con el dato apuntado por el hijo de la izquierda.
            } else
                if(x > r){
		    p = p->hde; // En caso que el valor sea mayor al dato, se asigna a p el apuntador al hijo de la derecha.
                    r = p->dato; // Se actualiza r con el dato apuntado por el hijo de la derecha.                    
                }
    }
    return rsl;
}

void CnjOrdEnt::insertarOrd(int x){
}

bool CnjOrdEnt::eliminar(int x){    
}