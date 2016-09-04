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
	shared_ptr<Ndo> p = orig.raiz;
	if(p == nullptr)
		raiz = nullptr;
	else{
		raiz = shared_ptr<Ndo> (new Ndo(p->dato));
		raiz->hde = p->hde;
		raiz->hiz = p->hiz;
		//shared_ptr<Ndo> copHiz = this->copiador(p->hiz);
		//shared_ptr<Ndo> copHde = this->copiador(p->hde);
		//p->hiz = copHiz;
		//p->hde = copHde;
	}
}

shared_ptr<CnjOrdEnt::Ndo> CnjOrdEnt::copiador(shared_ptr<Ndo> p) {
	shared_ptr<Ndo> aux;
	if(p != nullptr){
		aux = shared_ptr<Ndo> (new Ndo(p->dato));
		if(aux->hiz != nullptr){
			aux->hiz = copiador(aux->hiz);
		}
		if(aux->hde != nullptr){
			aux->hde = copiador(aux->hde);
		}
	}
	return aux;
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
				rsl = 2;
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
		} else if(aux == nullptr && rsl == 0){
			aux = ant->hde; //El auxiliar apunta al hijo de la derecha
			ant->hde = shared_ptr<Ndo> (new Ndo(x)); //Se inserta el dato en el hijo de la derecha
		}
	}
	if(rsl != 2)
		cout << "El dato fue ingresado satisfactoriamente" << endl;
}

bool CnjOrdEnt::sinHijo(int x)
{
	bool rsl = false;
	int aux2;
	shared_ptr<Ndo> aux = raiz;
	shared_ptr<Ndo> ant = nullptr;
	while (aux != nullptr) {
		if (aux->dato == x) {
			if (aux->hde == nullptr && aux->hiz == nullptr) {
				if (aux2 == 0) {
					aux = nullptr;
					ant->hiz = nullptr;
					rsl = true;
				} else if (aux2 == 1) {
					aux = nullptr;
					ant->hde = nullptr;
					rsl = true;
				}
			} else
				aux = nullptr;
		}
		else if (x < aux->dato) {
			ant = aux;
			aux = aux->hiz;
			aux2 = 0;
		} else if (x > aux->dato) {
			ant = aux;
			aux = aux->hde;
			aux2 = 1;
		}
	}
	return rsl;
}

bool CnjOrdEnt::unHijo(int x)
{
	bool rsl = false;
	int aux2;
	shared_ptr<Ndo> aux = raiz;
	shared_ptr<Ndo> ant = nullptr;
	while (aux != nullptr) {
		if (aux->dato == x) {
			if (aux->hde == nullptr || aux->hiz == nullptr) {
				if (aux2 == 0) {
					ant->hiz = aux->hiz;
					aux = nullptr;
					rsl = true;
				} else if (aux2 == 1) {
					ant->hde = aux->hde;
					aux = nullptr;
					rsl = true;
				}
			} else
				aux = nullptr;
		} else if (x < aux->dato) {
			ant = aux;
			aux = aux->hiz;
			aux2 = 0;
		} else if (x > aux->dato) {
			ant = aux;
			aux = aux->hde;
			aux2 = 1;
		}
	}
	return rsl;
}

bool CnjOrdEnt::dosHjos(int x)
{
	bool rsl = false; int dto_nvo;
	shared_ptr<Ndo> p = raiz;
	shared_ptr<Ndo> aux = nullptr;
	shared_ptr<Ndo> ant = nullptr;
	if(raiz->dato == x){
		dto_nvo = raiz->hiz->dato;
		p = raiz->hiz;
		rsl = true;
		while(p != nullptr){
			if(p->hde->dato > dto_nvo){
				dto_nvo = p->hde->dato;
				raiz->dato = dto_nvo;
				ant = p;
				p = p->hde;
			}else{
				ant = p;
				p = p->hde;
			}
			if(p->hde == nullptr && p->hiz == nullptr){
				ant->hde = nullptr;
				p = p->hde;
			}
		}
	}
	else {
		while(rsl != true){
			if(p->dato == x){
				dto_nvo = p->hiz->dato;
				aux = p->hiz;
				rsl = true;
				while(aux != nullptr){
					if(aux->hde == nullptr){
						p->dato = aux->dato;
						p->hiz = nullptr;
						p->hiz = aux->hiz;
						aux == nullptr;
						break;
					}
					else if(aux->hde->dato > dto_nvo){
						dto_nvo = aux->hde->dato;
						p->dato = dto_nvo;
						ant = aux;
						aux = aux->hde;
					}else{
						ant = aux;
						aux = aux->hde;			
					}
					if(aux->hde == nullptr && aux->hiz == nullptr){
						ant->hde = nullptr;
						aux = aux->hde;
					}
				}
			}
			else if(x < p->dato)
				p = p->hiz;
			else if(x > p->dato)
				p = p->hde;
		}
	}
	return rsl;
}

bool CnjOrdEnt::eliminar(int x){
	bool rsl;
	if(sinHijo(x))
		rsl = true;
	else if (unHijo(x))
		rsl = true;
	else if (dosHjos(x))
		rsl = true;
	return rsl;
}

string CnjOrdEnt::recorrido(shared_ptr<Ndo> p)
{
	//EFE:: RECURSIVIDAD DENTRO DE LA MISMA FUNCION SE USA EL RESULTADO DE ELLA MISMA
	stringstream fs;
	string hil;
	fs << p->dato << ',';
	if (p->hiz != nullptr) {
		fs << recorrido(p->hiz);
	}
	if (p->hde != nullptr) {
		fs << recorrido(p->hde);
	}
	fs >> hil;
	return hil;
}

int CnjOrdEnt::obtRaiz()
{
	int raz = raiz->dato;
	return raz;
}


string CnjOrdEnt::aHil()
{
	stringstream fs;
	shared_ptr<Ndo> p = raiz;
	fs << '{';
	if (p == nullptr)
		fs << '}';
	else {
		if (p->hiz != nullptr) {
			fs << recorrido(p->hiz);
		}
		fs << this->raiz->dato << ',';
		if (p->hde != nullptr) {
			fs << recorrido(p->hde);
		}
		fs << '}';
	}
	return fs.str();
}

