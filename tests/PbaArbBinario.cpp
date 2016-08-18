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

//void testCnjOrdEnt()
//{
//	CnjOrdEnt cnjOrdEnt();
//	if (true /*check result*/) {
//		std::cout << "%TEST_FAILED% time=0 testname=testCnjOrdEnt (newsimpletest) message=error message sample" << std::endl;
//	}
//}

//void testCnjOrdEnt2()
//{
//	const CnjOrdEnt& orig;
//	CnjOrdEnt cnjOrdEnt(orig);
//	if (true /*check result*/) {
//		std::cout << "%TEST_FAILED% time=0 testname=testCnjOrdEnt2 (newsimpletest) message=error message sample" << std::endl;
//	}
//}

void testBuscar()
{
	CnjOrdEnt cnjOrdEnt;
	cnjOrdEnt.insertarOrd(5);
	cnjOrdEnt.insertarOrd(7);
	cnjOrdEnt.insertarOrd(6);
	cnjOrdEnt.insertarOrd(1);
	cnjOrdEnt.insertarOrd(5);
	cnjOrdEnt.insertarOrd(9);
	cnjOrdEnt.insertarOrd(2);
	bool result1 = cnjOrdEnt.buscar(5);
	bool result2 = cnjOrdEnt.buscar(7);
	bool result3 = cnjOrdEnt.buscar(6);
	bool result4 = cnjOrdEnt.buscar(1);
	bool result8 = cnjOrdEnt.buscar(5);
	bool result5 = cnjOrdEnt.buscar(9);
	bool result6 = cnjOrdEnt.buscar(2);
	bool result7 = cnjOrdEnt.buscar(100);
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
		std::cout << "%TEST_FAILED% time=0 testname=testBuscar (newsimpletest) message=Error en el método Buscar al número 5 al ser reinsertado" << std::endl;
	}
}

//void testInsertarOrd()
//{
//	int x;
//	CnjOrdEnt cnjOrdEnt;
//	cnjOrdEnt.insertarOrd(x);
//	if (true /*check result*/) {
//		std::cout << "%TEST_FAILED% time=0 testname=testInsertarOrd (newsimpletest) message=error message sample" << std::endl;
//	}
//}

//void testEliminar()
//{
//	int x;
//	CnjOrdEnt cnjOrdEnt;
//	bool result = cnjOrdEnt.eliminar(x);
//	if (true /*check result*/) {
//		std::cout << "%TEST_FAILED% time=0 testname=testEliminar (newsimpletest) message=error message sample" << std::endl;
//	}
//}

int main(int argc, char** argv)
{
	std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
	std::cout << "%SUITE_STARTED%" << std::endl;

//	std::cout << "%TEST_STARTED% testCnjOrdEnt (newsimpletest)" << std::endl;
//	testCnjOrdEnt();
//	std::cout << "%TEST_FINISHED% time=0 testCnjOrdEnt (newsimpletest)" << std::endl;

//	std::cout << "%TEST_STARTED% testCnjOrdEnt2 (newsimpletest)" << std::endl;
//	testCnjOrdEnt2();
//	std::cout << "%TEST_FINISHED% time=0 testCnjOrdEnt2 (newsimpletest)" << std::endl;

	std::cout << "%TEST_STARTED% testBuscar (newsimpletest)" << std::endl;
	testBuscar();
	std::cout << "%TEST_FINISHED% time=0 testBuscar (newsimpletest)" << std::endl;

//	std::cout << "%TEST_STARTED% testInsertarOrd (newsimpletest)" << std::endl;
//	testInsertarOrd();
//	std::cout << "%TEST_FINISHED% time=0 testInsertarOrd (newsimpletest)" << std::endl;
//
//	std::cout << "%TEST_STARTED% testEliminar (newsimpletest)" << std::endl;
//	testEliminar();
//	std::cout << "%TEST_FINISHED% time=0 testEliminar (newsimpletest)" << std::endl;

	std::cout << "%SUITE_FINISHED% time=0" << std::endl;

	return(EXIT_SUCCESS);
}

