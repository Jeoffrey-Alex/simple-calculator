#include "main.hh"

calci::calci(int data1,int data2)
{
    num1 = data1;
    num2 = data2;

    std::cout<<"NUM1 - "<<num1<<std::endl;
    std::cout<<"NUM2 - "<<num2<<std::endl;
}

void calci::display()const
{
    std::cout<<"Results are"<<std::endl;
    std::cout<<"ADD : "<<res_a<<std::endl;
    std::cout<<"SUB : "<<res_s<<std::endl;
    std::cout<<"MUL : "<<res_m<<std::endl;
    std::cout<<"DIV : "<<res_d<<std::endl;
}

int main()
{
    calci c(40,10);

    c.add();
    c.sub();
    c.mul();
    c.div();

    c.display();

    return 0;
}