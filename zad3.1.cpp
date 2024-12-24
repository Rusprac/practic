#include<iostream>
#include<cmath>
using namespace std;


class Tochka
{
   private:
    float x;
    float y;
   public:
   Tochka(float x_kor,float y_kor) : y(y_kor),x(x_kor) {}
   
   const void Koord()
   {
       cout<<"Введённые координаты: (" << x << ";" << y << ")" << endl;
   }
   
       const double Distance() 
       {
           return sqrt(x*x+y*y);
       }
 };

int main()
{
    float x, y;
    cout<< "Введите значение x: " << endl;
    cin>> x;
    cout<< "Введите значение y: " << endl;
    cin>> y;
    
    Tochka p(x,y);
    p.Koord();
    cout<< "Расстояние до координат (0;0)= " << p.Distance() << endl;
    
    return 0;
}