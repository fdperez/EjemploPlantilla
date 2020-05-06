/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Objeto.h
 * Author: Daniel
 *
 * Created on 6 de mayo de 2020, 10:04
 */

#ifndef OBJETO_H
#define OBJETO_H
#include <string>
class Objeto {
public:
    Objeto();
    std::string getM(){return "hola";}
    Objeto(const Objeto& orig);
    virtual ~Objeto();
private:

};

#endif /* OBJETO_H */

