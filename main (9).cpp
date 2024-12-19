#include <iostream>
#include <cstring>
using namespace std;


bool poli(string s)
{
	int len = s.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(s[i] != s[len-i-1])
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
    setlocale(LC_ALL,"RU");
	string str;
	cout << "введите слово: ";
	cin >> str;
	if(poli(str))
	{
		cout << "не палидром";
	}
	else
	{
		cout << "палидром";
	}
	
	return 0;
}