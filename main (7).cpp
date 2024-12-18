#include <iostream>
#include <cmath>
using namespace std;


int fibo(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1; 
    int a = 0; 
    int b = 1; 
    int sum = a + b; 
    for (int i = 2; i < n; ++i) {
        int next = a + b; 
        sum += next;
        a = b; 
        b = next;
    }
    return sum; 
}
int main() 
{
    int n;
    cout << "Введите количество чисел Фибоначчи для суммирования: ";
    cin >> n;
    int res = fibo(n);
    cout << "Сумма первых " << n << " чисел Фибоначчи: " << res << endl;

    return 0;
}
