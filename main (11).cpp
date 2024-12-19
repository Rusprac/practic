#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int n, m;
    cout << "Введите количество ящиков в первом наборе (n): ";
    cin >> n;
    cout << "Введите количество ящиков во втором наборе (m): ";
    cin >> m;

    vector<int> weight_n(n), weight_m(m);
    cout << "Введите веса ящиков первого набора: ";
    for (int &w : weight_n) cin >> w;
    cout << "Введите веса ящиков второго набора: ";
    for (int &w : weight_m) cin >> w;

    int k;
    cout << "Введите количество ящиков для выбора (k): ";
    cin >> k;

    if (k > n + m || k < 2)
    {
        cout << "введите другое кол-во ящиков для подсчёта." << endl;
        return 0;
    }

    int max_weight = 0;

    cout << "Максимальный вес выбранных ящиков: " << max_weight << endl;
    
    return 0;
}
