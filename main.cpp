#include <iostream>
#include <cmath>
using namespace std;


void resh_fales(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Стороны треугольника должны быть положительными" << endl;
        
        return;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник с такими сторонами не существует" << endl;
        
        return;
    }
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Площадь треугольника: " << s << endl;
}

int main() {
    float a, b, c;
    cout << "Введите значения 3-х сторон: " << endl;
    cin >> a >> b >> c;
    resh_fales(a, b, c);
    
    return 0;
}
