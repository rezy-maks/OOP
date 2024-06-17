#include <iostream>

class X
{    protected: 
        int x;
   public:
        X(int i) : {x=i; std::cout<<" конструктор х "<<" x="<<x<<std::endl;}                  
}; 
class Y: public X
{    protected: 
        int y;
   public:
        Y() {y=0; std::cout<<" конструктор 1у "<<" y="<<y<<std::endl;}
        Y(int j) {y=j; std::cout<<" конструктор 2у "<<" y="<<y<<std::endl;}                  
}; //2
{ 
X obj_x(5);
Y obj_y(10);  
}