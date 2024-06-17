#include <iostream>


class Base{
   static int count1;
   static int count2;
public:
   static   void  show_count(void);
   Base (void); 
   ~ Base (void); 
 }
Base::Base (void)
{  
   count1++;
   count2++;
}
Base::~Base (void)
{ count2--  ;}
void  Base::show_count(void)
  { 
std::cout<<"Создано:"<<count1<<"\n";
std::cout<<"Существует:"<<count2<<"\n";
  }
  int  Base::count1;
int  Base::count2;

int main()
{
   Base   a, b, c, *p;
   Base::show_count();
   Base   x, y;
   b. show_count();
   p=new  Base;
   Base::show_count();
   delete p;
   Base::show_count();
return 0;
}//2