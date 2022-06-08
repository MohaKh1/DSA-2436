#include "point.h"
#include <iostream>
using namespace std;

template <class T>
point<T>::point(){
    x=0;
    y=0;
}

template <class T>
void point<T>::print(){
    cout << "("<<x<<", "<<y<<")" << endl;
}