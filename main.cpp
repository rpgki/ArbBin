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
	a.insertarOrd(1);
	a.insertarOrd(5);
	a.insertarOrd(9);
	a.insertarOrd(2);
	
	if(a.buscar(5) == true)
		cout << "Si lo encontro" << endl;
	else
		cout << "No lo encontro" << endl;
return 0;
}

