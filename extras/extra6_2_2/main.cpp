//friendship functions

#include <iostream>
using namespace std;
#include "red.h"
#include "yellow.h"
int test(Red x, Yellow y){
  if (x.r==1 && y.y==1){
      return 1;
  }
  return 0;
}

int main(){
  std::cout << "Hello World!\n";
  Red yourwire;
  Yellow mywire;
  int temp = test(yourwire, mywire);
  if (temp==1){
    cout << "True\n";
    }
  else { cout << "False\n";
    }
    
        
}