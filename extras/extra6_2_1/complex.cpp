#include "complex.h"

Complex::Complex( double r, double i ):
re( r ),
im( i ) {
    // empty constructor
}


// return the real component
double Complex::real() const {
    return re;
}
// return the imaginary component
double Complex::imag() const {
    return im;}

// return the absolute value
double Complex::abs() const {
    return std::sqrt( re*re + im*im );
}
Complex Complex::exp() const {
    double exp_re = std::exp( re );

    return Complex( exp_re*std::cos(im), exp_re*std::sin(im) );
}
void Complex::normalize() {
    if ( re == 0 && im == 0 ) {
        return;
    }

    double absval = abs();
    re /= absval;
    im /= absval;
}







