/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vectorr.h
 * Author: USUARIO
 *
 * Created on 23 de abril de 2020, 19:24
 */

#ifndef VECTORR_H
#define VECTORR_H

#include <cmath>
#include <vector>

template<typename T>
class Vectorr {
public:
    Vectorr(int tamini = 10);
    Vectorr(const Vectorr& orig);
    virtual ~Vectorr();
    int getTamMax() const;
    int getTamActual();
    T getPosicion(int posicion);
    Vectorr& operator=(const Vectorr& right);
    T& operator[](int pos);
    void anadirElemento(T t){
        _vector[_tam]=t;
        _tam++;
    }

private:
    int _tamMax = 10;
    int _tam = 0;
    T *_vector;

};

template<typename T>
Vectorr<T>::Vectorr(int tamini) : _tamMax(tamini), _tam(0) {
    _vector = new T[_tamMax];
}

template<typename T>
Vectorr<T>::Vectorr(const Vectorr<T>& orig) :
_tamMax(orig._tamMax) {
    if (_tamMax != orig._tamMax) {
        delete []_vector;
        _vector = new T[_tamMax];
    }
    for (int i = 0; i < _tamMax; i++)
        _vector[i] = orig._vector[i];
}

template<typename T>
Vectorr<T>::~Vectorr() {
    delete []_vector;
}

template<typename T>
int Vectorr<T>::getTamMax() const {
    return _tamMax;
}

template<typename T>
int Vectorr<T>::getTamActual(){
    return _tam;
}


template<typename T>
T Vectorr<T>::getPosicion(int posicion) {
    return _vector[posicion];
}

template<typename T>
Vectorr<T>& Vectorr<T>::operator=(const Vectorr<T>& right) {
    if (this != &right) {
        delete []_vector;
        _vector = new T [right._tamMax];
        _tamMax = right._tamMax;
        for (int i = 0; i < _tamMax; i++)
            _vector[i] = right._vector[i];
    }
    return *this;
}

template<typename T>
T& Vectorr<T>::operator[](int pos) {
    return _vector[pos];
}

#endif /* VECTORR_H */




















