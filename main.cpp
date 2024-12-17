#include <iostream>
#include<string>


float s(float a, float b, float c) {
    return a + b + c;
}
int main() {
    float d,e,f;
    std::cout << "Введите три целых числа: "<<std::endl;
    std::cin >> d >> e >> f;
    float r = s(d,e,f);
    std::cout << "Сумма: " << r << std::endl;

    return 0;
}
