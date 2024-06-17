#include <iostream>

 class X
{ 
protected: 
    int x;
public:
   X(): x(0)
     {
 std::cout<<" конструктор 1х "<<" x="<<x<<std::endl;
     }
X(int i): x(i) 
    { 
std::cout<<" конструктор 2х "<<" x="<<x<<std::endl;}                  
    }; //2
    class Y: public X
{ 
protected: 
      int y;
public:
 Y()
{y=0; std::cout<<" конструктор 1у "<<" y="<<y<<std::endl;}
     
  Y(int i, int j=22):X(i)
  {y=j; std::cout<<" конструктор 2у "<<" y="<<y<<std::endl;}                  
};

int main()
{
X obj_x(5);
Y obj_y(7);
}  