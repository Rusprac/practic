#include <iostream>
#include<string>
using namespace std;


int main() {
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    if (n <= 0) {
        std::cout << "Количество элементов должно быть положительным." << std::endl;
        return 1;
    }

    int spi[n]; 
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        cin >> spi[i];
    }
    int maxn = spi[0];
    int minn = spi[0];
    for (int i = 1; i < n; ++i) {
        if (spi[i] > maxn) {
            maxn = spi[i];
        }
        if (spi[i] < minn) {
            minn = spi[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (spi[i] != maxn && spi[i] != minn) {
            spi[i] = 0;
        }
    }
    cout << "Измененный массив: ";
    for (int i = 0; i < n; ++i) {
         cout << spi[i] << " ";
    }
    
    return 0;
}
