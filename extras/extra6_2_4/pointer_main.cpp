// pointers

#include <iostream>
using namespace std;

int main()
{
    //dynamic allocation of integer
    cout << "dynamic allocation of integer\n";
    int *p= new int;
    *p=10;
    cout << "*p="<<*p<<endl;

    delete p;
    cout << "deleting p\n\n";

    cout << "after deleting dynamic integer now *p = " << *p << endl;

    cout << "dynamic allocation of int array\n";
    //dynamic allocation of int array
    p = new int [5];
    for(int i=0;i<5;i++){
        *p = i;
        cout << endl;
        cout << "*p = " <<*p << "   p=" << p << endl << endl;
        p++;
    }
    
    //back to first cell of array in memory;
    p-=5;
    cout <<"p-=5\n"<< "now p = "<< p << endl;
    cout << "\ndeleting p int array\n\n";

    delete[] p;
    return 0;
}