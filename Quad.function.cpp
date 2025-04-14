
#include <iostream>
#include <cmath>



double Quadratic(double a, double b, double c){

double r1;
double r2;
    r1 = (-(b)+sqrt(b*b - 4*a*c))/(2*a);


    r2 = (-(b)-sqrt(b*b - 4*a*c))/(2*a);

    std::cout << "Root 1:" << r1 << std::endl;
    
    std::cout << "Root 2:" << r2 << std::endl;
    return 0;    

}

int main(){
    std::cout << "Enter coefficient a: ";
    
   double a;
   std::cin >> a;

   std::cout << "Enter coefficient b: ";
    
   double b;
   std::cin >> b;

   std::cout << "Enter coefficient c: ";
    
   double c;
   std::cin >> c;
    
    Quadratic(a,b,c);

    return 0;  
  
    

}