#include <iostream>
#include <cmath> 
using namespace std;


float zad1(float a, float b, float c)
{
    float k = (pow(a + 2 * b, 11) - 5 * c) * 3;
    return k; 
}

int main()
{
    float a, b, c;
    cout << "Введите три значения: " << endl;
    cin >> a >> b >> c;
    float res = zad1(a, b, c); 
    cout << "Результат: " << res << endl; 

    return 0;
}
