#include <iostream>

using namespace std;

int main()
{
    long long x;
    bool prime = true;
    cin >> x;

    for (int i = 2; i <= x; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}