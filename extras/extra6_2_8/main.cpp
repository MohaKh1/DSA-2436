//
#include<iostream>
#include "word.h"
using namespace std;



int main()
{
    word l1;
    l1.insert('a');
    l1.insert_beg('b');
    l1.insert('x');
    l1.insert('c');
    l1.delete_letter('x');
    l1.insert('k');
    l1.insert('c'); // problem
    l1.insert('p');
    l1.insert('a');
    l1.insert('c');
    l1.insert('k');
    cout << "~before\n";
    l1.display();
    // l1.delete_letter() function call to delete extra c.
    l1.delete_letter('c',2);
    cout << "~after\n";
    l1.display();



    return 0;
}