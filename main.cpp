/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: USUARIO
 *
 * Created on 23 de abril de 2020, 19:23
 */

#include <cstdlib>
#include <iostream>
#include "Vectorr.h"
#include "Objeto.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Vectorr<Objeto> v1(10);
    v1.anadirElemento(Objeto());
    cout<<v1.getTamActual()<<endl;
    cout<<v1[0].getM();

    return 0;
}




