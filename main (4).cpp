#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Введите целое число: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "У числа " << n << " нет нетривиальных делителей." << endl;
    } else {
        cout << "Нетривиальные делители числа " << n << ": ";

        bool deli = false; 
        for (int i = 2; i < n; i++) {
            if (n % i == 0) { 
                cout << i << " "; 
                deli = true; 
            }
        }

        if (!deli) {
            cout << "нет." << endl;
        } else {
            cout << endl; 
        }
    }

    return 0;
}
