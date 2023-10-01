

#include <bits/stdc++.h>
using namespace std;
void prime(int n)
{
    int c = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            c++;
            break;
        }
    }
    (c) ? cout << "NO" << endl : cout << "YES" << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << "NO"
                 << "\n";
        else if (n == 2)
            cout << "YES"
                 << "\n";
        else if (n % 2 == 0)
            cout << "NO"
                 << "\n";
        else
            prime(n);
    }
}