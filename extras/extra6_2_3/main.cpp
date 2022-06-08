//templates extra

#include <iostream>
#include "point.cpp"

template <class T1, class T2>
T1 sum(T1 integer, T2 float_num){
    return integer + float_num;

}
int main(){
    std::cout << "Hello point script!\n";
    point <int> A;
    point <float> B;
    B.print();
    cout << sum(2, 5.6);

}