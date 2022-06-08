#ifndef YELLOW_H
#define YELLOW_H


class Yellow{

    private:
        int y;
    public:
        Yellow(){
          y=1;
        };

    friend int test(Red, Yellow);
    
};
#endif