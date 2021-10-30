#include "vector.h"
#include <iostream>
#include <cstring>
#include <stdexcept>
//using namespace std;


const char ind_error[] = "Index is out of range";
template<typename T>
void Vector<T>::push_back(T x){
    elem = (T* )realloc(elem, sz + 1);
    elem[sz++] = x;
}

template<typename T>
T& Vector<T>::operator [](int i){
    if(i < 0) i += sz;
    if(i >= 0 && i < sz){
        return elem[i];
    }

    throw std::runtime_error(ind_error);
}

template<typename T>
void Vector<T>::pop_back(){
    if(sz == 0) throw std::runtime_error(ind_error);

    elem = (T* )realloc(elem, sz - 1);
    sz--;
}

template<typename T>
T* Vector<T>::begin(){
    if(sz == 0) throw std::runtime_error(ind_error);

    return &(elem[0]);
}


template<typename T>
T* Vector<T>::end(){
    if(sz == 0) throw std::runtime_error(ind_error);

    return &(elem[sz - 1]) + 1;
}

template<typename T>
T& Vector<T>::front(){
    if(sz == 0) throw std::runtime_error(ind_error);;
    return elem[0];
}

template<typename T>
T& Vector<T>::back(){
    if(sz == 0) throw std::runtime_error(ind_error);;

    return elem[sz - 1];
}

template<typename T>
void Vector<T>::insert(T x, int num){
    if(num < 0) num += sz;
    if(num < 0) throw std::runtime_error(ind_error);
    
    if(num >= sz) throw std::runtime_error(ind_error);

    elem = (T* )realloc(elem, sz + 1)

    
}