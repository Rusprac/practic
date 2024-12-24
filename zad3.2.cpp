#include <iostream>
#include <cmath>
using namespace std;

class Tochki 
{
private:
    float x; 
    float y; 
    float z; //x2
    float v; //y2

public:
    Tochki(float x_kor, float y_kor, float z_kor, float v_kor) 
        : x(x_kor), y(y_kor), z(z_kor), v(v_kor) {}

    void Koord() const 
    {
        cout << "Введённые координаты первой точки: (" << x << ";" << y << ")" << endl;
        cout << "Введённые координаты второй точки: (" << z << ";" << v << ")" << endl;
    }
    double Distance() const 
    {
        return sqrt(pow(x - z, 2) + pow(y - v, 2));
    }
};

int main() 
{
    float x, y, z, v;
    
    cout << "Введите значение x первой точки: " << endl;
    cin >> x;
    cout << "Введите значение y первой точки: " << endl;
    cin >> y;
    cout << "Введите значение x второй точки: " << endl;
    cin >> z;
    cout << "Введите значение y второй точки: " << endl;
    cin >> v;
    
    Tochki p(x, y, z, v);
    p.Koord();
    cout << "Расстояние между точками = " << p.Distance() << endl;

    return 0;
}
