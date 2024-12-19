#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n; 
    cout<<"Введите кол-во команд заселения:"<<endl;
    cin >> n;

    const int MAX_ROOMS = 100; 
    std::vector<int> rooms(MAX_ROOMS + 1, 0); 

    for (int i = 0; i < n; ++i) 
    {
        string cmd;
        int room_number;
        cout<<"Введите команду и номер комнаты:"<< endl;
        cin >> cmd >> room_number;

        if (cmd == "+")
        {
            if (room_number >= 1 && room_number <= MAX_ROOMS) 
            {
                rooms[room_number]++; 
            }
        } else if (cmd == "-")
        {
            if (room_number >= 1 && room_number <= MAX_ROOMS && rooms[room_number] > 0)
            {
                rooms[room_number]--; 
            }
        } else if (cmd == "?") 
        {
            if (room_number >= 1 && room_number <= MAX_ROOMS)
            {
                cout<<"Количество людей в номерах:" << rooms[room_number] << endl; 
            }
        }
    }

    return 0;
}
