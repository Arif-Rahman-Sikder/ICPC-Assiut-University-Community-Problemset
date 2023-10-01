#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll int n;
    cin >> n;
    int cnt = 0;

    for (int i = 1; i <=sqrt(n) ;i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i)
                cnt++;
        }
    }
    if (cnt == 2)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}