//recursion tail and tree
#include<iostream>
using namespace std;
int abc(int n){
    if (n==0){
        cout << "Recursion finished \n";
        return n;
        }
    else{
        
       
        return n + abc(n-1);
    }
}

int main()
{
    int temp;
    cin >> temp;
    cout << abc(temp);
    return 0;
}