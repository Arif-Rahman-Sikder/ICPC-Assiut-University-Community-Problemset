#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin >> n;

    ll int cnt = 0;

    for (ll int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt += i;          
            if (i != n / i)    
            {
                cnt += n / i;  
            }
        }
    }

    cout << cnt;

    return 0;
}
