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
    bool rsl = false;
    shared_ptr<Ndo> p = raiz;
    int r = raiz->dato;
    while(raiz != nullptr && p != nullptr && rsl != true){
        if(r == x){
            rsl == true;
            p = nullptr;
        }else 
            if(x < r){
                r = Ndo.hiz->dato;
                p = p->hiz;
            } else
                if(x > r){
                    r = Ndo.hde->dato;
                    p = p->hde;
                }
    }
    return rsl;
}

void CnjOrdEnt::insertarOrd(int x){
}

bool CnjOrdEnt::eliminar(int x){    
}