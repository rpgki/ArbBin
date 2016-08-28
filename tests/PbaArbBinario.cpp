/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest.cpp
 * Author: Carlos
 *
 * Created on 15 de agosto de 2016, 05:02 PM
 */

#include <stdlib.h>
#include <iostream>
#include "CnjOrdEnt.h"

/*
 * Simple C++ Test Suite
 */

void testCnjOrdEnt()
{
	CnjOrdEnt cnjOrdEnt;
	string h = cnjOrdEnt.aHil();
	if (h != "{}") {
		std::cout << "%TEST_FAILED% time=0 testname=testCnjOrdEnt (newsimpletest) el constructor estandar o el metodo ahil fallo" << std::endl;
	}
}

//void testCnjOrdEnt2()
//{
//	CnjOrdEnt orig;
//	CnjOrdEnt cnjOrdEnt(orig);
//	string h = cnjOrdEnt.aHil();
//	if (h != "{}") {
//		std::cout << "%TEST_FAILED% time=0 testname=testCnjOrdEnt2 (newsimpletest) el constructor de copias o el metodo ahil fallo" << std::endl;
//	}
//}

void testBuscar()
{
	CnjOrdEnt cnjOrdEnt;
	cnjOrdEnt.insertarOrd(5);
	cnjOrdEnt.insertarOrd(7);
	cnjOrdEnt.insertarOrd(6);
	cnjOrdEnt.insertarOrd(2);
	cnjOrdEnt.insertarOrd(1);
	cnjOrdEnt.insertarOrd(5);
	cnjOrdEnt.insertarOrd(9);
	cnjOrdEnt.insertarOrd(3);
	cnjOrdEnt.insertarOrd(4);
	cnjOrdEnt.insertarOrd(10);
	cnjOrdEnt.insertarOrd(11);
	bool result1 = cnjOrdEnt.buscar(5);
	bool result2 = cnjOrdEnt.buscar(7);
	bool result3 = cnjOrdEnt.buscar(6);
	bool result4 = cnjOrdEnt.buscar(1);
	bool result8 = cnjOrdEnt.buscar(5);
	bool result5 = cnjOrdEnt.buscar(9);
	bool result6 = cnjOrdEnt.buscar(2);
	bool result7 = cnjOrdEnt.buscar(100);
	bool result9 = cnjOrdEnt.buscar(2);
	bool result10 = cnjOrdEnt.buscar(3);
	bool result11 = cnjOrdEnt.buscar(4);
	bool result12 = cnjOrdEnt.buscar(10);
	bool result13 = cnjOrdEnt.buscar(11);
	if (result1 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 5" << std::endl;
	}
	if (result2 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 7" << std::endl;
	}
	if (result3 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 6" << std::endl;
	}
	if (result4 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 1" << std::endl;
	}
	if (result5 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 9" << std::endl;
	}
	if (result6 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 2" << std::endl;
	}
	if (result7 == true) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 100" << std::endl;
	}
	if (result8 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 5 reinsertado" << std::endl;
	}
	if (result9 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 2" << std::endl;
	}
	if (result10 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 3" << std::endl;
	}
	if (result11 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 4" << std::endl;
	}
	if (result12 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 10" << std::endl;
	}
	if (result13 == false) {
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 11" << std::endl;
	}
}

void testInsertarOrd()
{
	CnjOrdEnt a;
	a.insertarOrd(5);
	a.insertarOrd(7);
	a.insertarOrd(6);
	a.insertarOrd(2);
	a.insertarOrd(1);
	a.insertarOrd(9);
	a.insertarOrd(3);
	a.insertarOrd(4);
	a.insertarOrd(10);
	a.insertarOrd(11);

	if (a.aHil() != "{2,1,3,4,5,7,6,9,10,11,}") {
		std::cout << "%TEST_FAILED% time=0 testname=testInsertarOrd (newsimpletest) el metodo insertar fallo" << std::endl;
	}
}

void testEliminar()
{
	CnjOrdEnt a; CnjOrdEnt b; CnjOrdEnt c; CnjOrdEnt d; //a Prueba Caso sin hijos. b Prueba Caso con un hijo. c Prueba Caso con dos hijos. d Prueba Caso de la raiz.
	a.insertarOrd(5);b.insertarOrd(5);c.insertarOrd(5);d.insertarOrd(5);
	a.insertarOrd(7);b.insertarOrd(7);c.insertarOrd(7);d.insertarOrd(7);
	a.insertarOrd(6);b.insertarOrd(6);c.insertarOrd(6);d.insertarOrd(6);
	a.insertarOrd(2);b.insertarOrd(2);c.insertarOrd(2);d.insertarOrd(2);
	a.insertarOrd(1);b.insertarOrd(1);c.insertarOrd(1);d.insertarOrd(1);
	a.insertarOrd(9);b.insertarOrd(9);c.insertarOrd(9);d.insertarOrd(9);
	a.insertarOrd(3);b.insertarOrd(3);c.insertarOrd(3);d.insertarOrd(3);
	a.insertarOrd(4);b.insertarOrd(4);c.insertarOrd(4);d.insertarOrd(4);
	a.insertarOrd(10);b.insertarOrd(10);c.insertarOrd(10);d.insertarOrd(10);
	a.insertarOrd(11);b.insertarOrd(11);c.insertarOrd(11);d.insertarOrd(11);
	a.eliminar(1); b.eliminar(9); c.eliminar(7); d.eliminar(5);
	if (a.aHil() != "{2,3,4,5,7,6,9,10,11,}") {
		std::cout << "%TEST_FAILED% time=0 testname=testInsertarOrd (newsimpletest) el metodo eliminar fallo eliminando el dato 1" << std::endl;
	}
	if (b.aHil() != "{2,1,3,4,5,7,6,10,11,}") {
		std::cout << "%TEST_FAILED% time=0 testname=testInsertarOrd (newsimpletest) el metodo eliminar fallo eliminando el dato 9" << std::endl;
	}
	if (c.aHil() != "{2,1,3,4,5,6,9,10,11,}") {
		std::cout << "%TEST_FAILED% time=0 testname=testInsertarOrd (newsimpletest) el metodo eliminar fallo eliminando el dato 7" << std::endl;
	}
	if (d.aHil() != "{2,1,3,4,7,6,9,10,11,}") {
		std::cout << "%TEST_FAILED% time=0 testname=testInsertarOrd (newsimpletest) el metodo eliminar fallo eliminando el dato 5" << std::endl;
	}
}

int main(int argc, char** argv)
{
	std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
	std::cout << "%SUITE_STARTED%" << std::endl;

	std::cout << "%TEST_STARTED% testCnjOrdEnt (newsimpletest)" << std::endl;
	testCnjOrdEnt();
	std::cout << "%TEST_FINISHED% time=0 testCnjOrdEnt (newsimpletest)" << std::endl;

//	std::cout << "%TEST_STARTED% testCnjOrdEnt2 (newsimpletest)" << std::endl;
//	testCnjOrdEnt2();
//	std::cout << "%TEST_FINISHED% time=0 testCnjOrdEnt2 (newsimpletest)" << std::endl;

	std::cout << "%TEST_STARTED% testBuscar (newsimpletest)" << std::endl;
	testBuscar();
	std::cout << "%TEST_FINISHED% time=0 testBuscar (newsimpletest)" << std::endl;

	std::cout << "%TEST_STARTED% testInsertarOrd (newsimpletest)" << std::endl;
	testInsertarOrd();
	std::cout << "%TEST_FINISHED% time=0 testInsertarOrd (newsimpletest)" << std::endl;

	std::cout << "%TEST_STARTED% testEliminar (newsimpletest)" << std::endl;
	testEliminar();
	std::cout << "%TEST_FINISHED% time=0 testEliminar (newsimpletest)" << std::endl;

	std::cout << "%SUITE_FINISHED% time=0" << std::endl;

	return(EXIT_SUCCESS);
}

