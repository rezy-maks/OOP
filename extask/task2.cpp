#include <iostream>

class Point 
{
		int x;
		int y;
		int color;
public:   
Point (int set_x=0, int set_y=0, int set_color=7): x(set_x), y(set_y), color(set_color)
            { 
                  std::cout<<"constructor Point\n";
             }
                    
void ff ()     {  std::cout<<" color="<<color<<std::endl;} ;
}; //2
int main()
{
srand(time(0));
 Point *  point[3];
 for   (int i=0; i<3; i++)
      point[i] = new Point(2, 3, i+1);
      
   point[0]->ff();
   point[1]->ff();
   point[2]->ff(); 
 return 0;
}