#include <iostream>

    class A {
        public:
        virtual  void  Show(void)
            {
                std::cout<<"A  ";
            }
    };
   class B: public A {
public:
    virtual  void  Show(void)
                            { std::cout<<"B  "; }
};
class C: public B {
public:
    virtual  void  Show(void)
                            { std::cout<<"C  "; }
};
int main ()
{  A Aobj, *pA; 
   B  Bobj, *pB;      
    C   Cobj, *pC; 
  pA=&Aobj;
  pA -> Show();  
  pA=&Bobj; 
  pA -> Show();
  pA=&Cobj; 
  pA -> Show(); 
  pB=&Bobj;
  pB -> Show();
  }