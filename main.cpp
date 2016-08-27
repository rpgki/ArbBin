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
	CnjOrdEnt a;
	a.insertarOrd(5); 
	a.insertarOrd(7); 
	a.insertarOrd(6);
	a.insertarOrd(2);
	a.insertarOrd(5);
	a.insertarOrd(9);
	a.insertarOrd(1);
	a.insertarOrd(10);
	a.insertarOrd(3);
	a.insertarOrd(4);
	a.insertarOrd(11);
	
	if(a.buscar(22) == true)
		cout << "Si lo encontro" << endl;
	else
		cout << "No lo encontro" << endl;
	string pba = a.aHil();
	cout << pba << endl;
	a.eliminar(2);
	cout << a.aHil() << endl;

return 0;
}

