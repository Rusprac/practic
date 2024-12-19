#include <iostream>
#include <string>
using namespace std;


string longstr(const string & s)
{
    string msubstr;

    for (size_t i = 0; i < s.length(); ++i)
    {
        char start_char = s[i];
        for (size_t j = s.length() - 1; j > i; --j) 
        {
            if (s[j] == start_char)
            {
                std::string substr = s.substr(i, j - i + 1);
                if (substr.length() > msubstr.length())
                {
                    msubstr = substr;
                }
                break; 
            }
        }
    }

    return msubstr;
}

int main()
{
    string fstr;
    cout << "Введите строку: ";
    getline(cin, fstr);
    string res = longstr(fstr);
    if (!res.empty()) {
        cout << "Наибольшая подстрока, начинающаяся и заканчивающаяся одинаковыми символами: " << res  << endl;
    } else {
        cout << "Не найдено подходящей подстроки." << endl;
    }

    return 0;
}
