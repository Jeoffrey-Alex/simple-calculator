#ifndef CALCI_HH
#define CALCI_HH

#include <iostream>

class calci
{
    int num1;
    int num2;

    int res_a, res_s, res_m, res_d;

    public:
    calci(int ,int);
 
    void add();
    void sub();
    void mul();
    void div();

    void display()const ;

};

#endif