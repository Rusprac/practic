#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    int n;
    cout<<"Введите количество чисел:"<< endl;
    cin >> n ; 

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> nums[i]; 
    }
    int maxn = nums[0]; 
    double sum = 0;
    
    for (int num : nums) 
    {
        maxn = max(maxn, num); 
        sum += num;
    }

    double avg = sum / n;
    double dif = maxn - avg;
    cout<<"Разница между значениями = " << dif;

    return 0;
}