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
	while (menu == true){
	    cout << "#########ARBOL BINARIO DE NUMEROS ENTEROS#########\n";
            cout << "1 - Insertar un número.\n";
	    cout << "2 - Buscar un número.\n";
	    cout << "3 - Eliminar un número.\n";
	    cout << "4 - Mostrar números que componen el árbol.\n";
	    cout << "5 - Salir del programa.\n";
	    cout << "Inserte su opcion y presione enter: ";
	    
	    cin >> opcion;
 
	switch(opcion){
	case 1:
		cout << "Inserte un numero entero: ";
		cin >> num; 
		cout << endl;
			arbBin.insertarOrd(num);
		break;	    
	case 2:
		cout << "Inserte un numero entero: ";
		cin >> num;
		cout << endl;
		if(arbBin.buscar(num))
			cout << "El numero: " << num << ", fue encontrado" << endl;
		else
			cout << "El numero: " << num << ", no fue encontrado" << endl;
		break;	 
	case 3:
		cout << "Inserte un numero entero: ";
		cin >> num;
		cout << endl;
		arbBin.eliminar(num);
		break;    
	case 4:
		cout << arbBin.aHil() << endl;
		if(arbBin.aHil() != "{}")
			cout << "La raíz del árbol es: " << arbBin.obtRaiz() << endl;
		else
			cout << "El árbol no tiene contenido, favor inserte uno" << endl;
		break;
	case 5:
		menu = false;
		break;
	}
    }
	
return 0;
}

