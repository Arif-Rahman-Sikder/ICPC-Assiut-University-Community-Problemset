
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << " ";
            continue;
        }
        if (i == 2)
        {
            cout << b << " ";
            continue;
        }

        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }

    return 0;
}