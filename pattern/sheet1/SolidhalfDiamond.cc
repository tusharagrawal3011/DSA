#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i >=6)
        {
            for (int j = 5; j > i - 6; j--)
                cout << j;
        }
        else
        {
            for (int j = 5; j >= (5 - i); j--)
                cout << j;
        }
        cout << "\n";
    }
    return 0;
}