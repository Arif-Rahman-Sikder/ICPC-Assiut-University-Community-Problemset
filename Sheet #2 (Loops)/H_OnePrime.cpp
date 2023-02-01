
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int number, divisor;
    bool prime = true;
    cin >> number;

    for (divisor = 2; divisor < number; divisor++)
    {
        if ((number % divisor) == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}


