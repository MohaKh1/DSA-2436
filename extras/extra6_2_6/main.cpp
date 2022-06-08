//array class convert to template
//slide 42
#include<iostream>
#include "dynamic_array.cpp"
using namespace std;

//change to template
int main()
{
    dynamic_array <int> A(3);
    if (A.is_empty()){
        cout << "~A.is_empty() = true\n";
    }
    else{ cout << "~A.is_empty() = false\n"; }
    cout << "~A.append(1);\nA.append(3);\nA.append(5);\n";
    A.append(1);
    A.append(3);
    A.append(5);
    if (A.is_full()){
        cout << "~A.is_full() = true\n";
    }
    else{ cout << "~A.is_full() = false\n"; }
    cout << "~A.append(3) = ";
    A.append(3);
    cout << endl;
    cout << "~A.print()=\n";
    A.print();

    int search_result = A.search(2);
    cout << "~A.search(2)\n";
    if (search_result==-1) {
        cout << "the searched element was not in the array\n";
    }
    A.remove_at(2);
    cout << "~A.remove_at(2)\n";

    A.print();
    cout << "~A.listsize() = " << A.listsize() << endl;

    dynamic_array <char> B(5);
    if (B.is_empty()){
        cout << "~A.is_empty() = true\n";
    }
    else{ cout << "~B.is_empty() = false\n"; }
    cout << "~B.append(c);\nB.append(a);\nB.append(b);\n";
    B.append('c');
    B.append('a');
    B.append('b');
    if (B.is_full()){
        cout << "~B.is_full() = true\n";
    }
    else{ cout << "~B.is_full() = false\n"; }
    cout << "~B.append(l) = ";
    B.append('l');
    cout << endl;
    cout << "~B.print()=\n";
    B.print();

    int _search_result = B.search('e');
    cout << "~B.search('e')\n";
    if (_search_result==-1) {
        cout << "the searched element was not in the array\n";
    }
    cout << "~B.insert_at(1, 'o')\n";
    B.insert_at(1, 'o');
    B.print();
    cout << "~B.listsize() = " << B.listsize() << endl;

    

    return 0;
}
