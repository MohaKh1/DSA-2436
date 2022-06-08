#ifndef RED_H
#define RED_H
#include "yellow.h"


class Red{

    private:
        int r;
    public:
        Red(){
          r=1;
        };

    friend int test(Red, Yellow);
    
};
#endif