#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>
#include <stdexcept>
template<typename T>
class Vector{
private:
    T* elem;
    int sz = 0;
public:
    Vector():elem{new T[0]}{};
    Vector(int sz): elem{new T[sz]}, sz(sz){};
    Vector(int sz, T num): elem{new T[sz]}, sz(sz){
        for(int i = 0; i < sz; i++)
            elem[i] = num;
    };
    ~Vector(){delete[] elem;};

    T& operator [](int i);
    int size(){
        return sz;
    }
    void push_back(T x);
    void pop_back();
    T& front();
    T& back();
    T* begin();
    T* end();

    void insert(T x, int ind);
    void remove(T x, int ind);
};
//#include "vector.cpp"
#endif
