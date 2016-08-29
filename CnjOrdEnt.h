/* 
 * File:   CnjOrdEnt.h
 * Author: a76326
 *
 * Created on 11 de agosto de 2016, 03:32 PM
 */

#ifndef CNJORDENT_H
#define	CNJORDENT_H

#include<memory>
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

class CnjOrdEnt {
public:
    CnjOrdEnt();
    CnjOrdEnt(const CnjOrdEnt& orig);
    virtual ~CnjOrdEnt();
    bool buscar(int x);
    void insertarOrd(int x);
    bool eliminar(int x);
    string aHil();
    int obtRaiz();
    
private:
    
    struct Ndo{
    public:
        Ndo(int x):dato(x),hiz(nullptr),hde(nullptr){};
        ~Ndo(){/*cout << "borrando: " << dato << endl;*/};
        int dato;
        shared_ptr<Ndo> hiz;
        shared_ptr<Ndo> hde;
    };
    shared_ptr<Ndo> copiador(shared_ptr<Ndo> p);
    string recorrido(shared_ptr<Ndo> p);
    bool sinHijo(int x);
    bool unHijo(int x);
    bool dosHjos(int x);
    shared_ptr<Ndo> raiz;
};

#endif	/* CNJORDENT_H */

