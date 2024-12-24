#include <iostream>
#include <string>
using namespace std;


int countCM(const string* cinema1, int size1, const string* cinema2, int size2) 
{
    int commonCount = 0;
    for (int i = 0; i < size1; ++i)
    {
        for (int j = 0; j < size2; ++j)
        {
            if (cinema1[i] == cinema2[j])
            {
                commonCount++;
                break; 
            }
        }
    }
    return commonCount;
}

int main() 
{
    string cinema1[] = {"Movie A", "Movie B", "Movie C"};
    string cinema2[] = {"Movie B", "Movie D", "Movie A", "Movie E"};

    int size1 = sizeof(cinema1) / sizeof(cinema1[0]);
    int size2 = sizeof(cinema2) / sizeof(cinema2[0]);
    int commonMovies = countCommonMovies(cinema1, size1, cinema2, size2);
    cout << "Количество общих фильмов: " << commonMovies << endl;

    return 0;
}
