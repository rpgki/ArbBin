/* 
 * File:   main.cpp
 * Author: a76326
 *
 * Created on 11 de agosto de 2016, 03:26 PM
 */

#include <iostream>
#include <memory>

#include "CnjOrdEnt.h"

using namespace std;

int main(int argc, char** argv) {
	CnjOrdEnt arbBin; bool menu = true; int opcion; int num; int raiz;
	CnjOrdEnt orig;
	CnjOrdEnt cnjOrdEnt(orig);
	string h = cnjOrdEnt.aHil();
	cout << h << endl;
//	while (menu == true){
//	    cout << "#########ARBOL BINARIO DE NUMEROS ENTEROS#########\n";
//            cout << "1 - Insertar un número.\n";
//	    cout << "2 - Buscar un número.\n";
//	    cout << "3 - Eliminar un número.\n";
//	    cout << "4 - Mostrar números que componen el árbol.\n";
//	    cout << "5 - Salir del programa.\n";
//	    cout << "Inserte su opcion y presione enter: ";
//	    
//	    cin >> opcion;
// 
//	switch(opcion){
//	case 1:
//		cin >> num;
//		if(arbBin.aHil() == "{}")
//			raiz = num;
//		else
//			arbBin.insertarOrd(num);
//		break;	    
//	case 2:
//		cin >> num;
//		arbBin.buscar(num);
//		break;	 
//	case 3:
//		cin >> num;
//		arbBin.eliminar(num);
//		break;    
//	case 4:
//		cout << arbBin.aHil() << endl;
//		if(arbBin.aHil() != "{}")
//			cout << "La raíz del árbol es: " << raiz << endl;
//		else
//			cout << "El árbol no tiene contenido, favor inserte uno" << endl;
//		break;
//	case 5:
//		menu = false;
//		break;
//	}
//    }
	
return 0;
}

