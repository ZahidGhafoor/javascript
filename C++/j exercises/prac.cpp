#include <iostream>
using namespace std;

int Zahid(int a, int b)
{
     return (a * b);
};
float Zahid(int a, int b, float c)
{
     return (a * b + c);
};

// Calculate the volume of cylinder
int vol(double r , int h){
     return(3.14 *r *r *h);
};

// Calculate the volume of cube
int vol(int h){
     return(h *h * h);
};

//Calculate the volume rectangular box
int vol(int a , int b, int h){
     return(a * b * h);
};

int main()
{

     cout << "holo how are you  " << Zahid(3, 6) << endl ;
        
     cout << "holo how are you  " << Zahid(3, 6, 5.5)<< endl ;
         

     cout << "Volume of a cylinder  " << vol(6, 5.5) << endl ;
        
     cout << "Volume of a cube  " << vol(6) << endl  ;
       
     cout << "Volume of a rectangular box  "  << vol(3, 6, 5.5)<< endl;
         

     return 0;
}