//extra idek basic classes
#include <iostream>
#include "complex.h"
using namespace std;


int main(){
  Complex A(1,2);

  cout << "abs():" << A.abs();
  cout << "\nreal(): " << A.real();
  cout << "\nimag(): " << A.imag();

  cout << "\n\nexp(): ";
  
  A = A.exp();
  cout << "\n  real(): " << A.real();
  cout << "\n  imag(): " << A.imag();

  cout << "\n\nnormalize(): ";
  
  A.normalize();
  cout << "\n  real(): " << A.real();
  cout << "\n  imag(): " << A.imag();


  
  
  
  
  
  
  return 0;
}

