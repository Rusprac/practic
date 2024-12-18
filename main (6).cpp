#include <iostream>
#include <cmath>
using namespace std;


int LargFSq(int l, int r)
{
    int mkor = static_cast<int>(sqrt(r));
    for (int i = mkor; i >= 0; --i) 
    {
        int FSq = i * i;
        if (FSq >= l && FSq <= r)
        {
            return FSq; 
        }
    }
    
    return -1; 
}
int main() {
    int l, r;
    std::cout << "Введите l и r: ";
    std::cin >> l >> r;
    int res = LargFSq(l, r);
    if (res != -1) {
        std::cout << "Наибольший полный квадрат в диапазоне [" << l << "; " << r << "] : " << res << std::endl;
    } else {
        std::cout << "Полных квадратов в диапазоне [" << l << "; " << r << "] не найдено." << std::endl;
    }

    return 0;
}
