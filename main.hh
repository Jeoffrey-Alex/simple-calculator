#include <iostream>

class calci
{
    int num1;
    int num2;
    int res1,re2,re3,re4;   //use res1 for add, res2 for sub, res3 for mul, res4 for div

    public:
    calci(int x,int y)
    {}

    int add();
    int sub();
    int mul();
    int div();

    void display();     //print the result saying ADDITION.,,
}