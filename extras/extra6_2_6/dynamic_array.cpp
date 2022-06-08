#include "dynamic_array.h"
#include "iostream"
#include <random>
using namespace std;

template <class T>
dynamic_array<T>::dynamic_array(int s){
    size = s;
    element = new T[s];
    top = -1;
}

template <class T>
dynamic_array<T>::~dynamic_array(){
    delete [] element;
}

template <class T>
void dynamic_array<T>::setrand(){
    for (int i = 0; i <= top; i++)
    {
        element[i] = rand() %10;
    }
    
}
template <class T>
void dynamic_array<T>::print(){
    for (int i = 0; i < top+1; i++)
    {
        cout << element[i] << endl;
    }
    
}
template <class T>
bool dynamic_array<T>::is_empty(){
    if (top+1==0) {
        return true;
    }
    return false;
}

template <class T>
bool dynamic_array<T>::is_full(){
    if (size-1==top){
        return true;
    }
    return false;
}

template <class T>
void dynamic_array<T>::append(T elem){
    if (not this->is_full()){
        top++;
        element[top] = elem;
        cout << "successfully appended " << elem << endl;
    }
    else{
        cout << "Unable to append " << elem << "\narray is full\n";
    }
}

template <class T>
int dynamic_array<T>::search(T elem){
    for(int i=0; i<size;i++){
        if (elem==element[i]){
            return i;
        }
    }
    return -1;
}

template <class T>
void dynamic_array<T>::insert_at(int index, T elem){
    if (index < 0 || index > top || this->is_full()){
        cout << "cannot insert_at " << index << endl;
        return;
    }
    top++;
    for(int i = top+1; i >=index;i--){
        element[i] = element[i-1];
    }
    element[index] = elem;


}
template <class T>
void dynamic_array<T>::remove_at(int index){
    if (index < 0 || index > top){
        cout << "cannot insert_at " << index << endl;
        return;
    }
    top--;
    for(int i = index; i <=top+1;i++){
        element[i] = element[i+1];
    }
    return;


}

template <class T>
int dynamic_array<T>::listsize(){return size; }