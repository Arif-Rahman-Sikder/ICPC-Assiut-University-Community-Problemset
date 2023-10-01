#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printEquation(int x, int n)
{
   ll int add = 0;
    for (int i = 0; i <= n; i += 2)
    {
        ll int square = pow(x, i);
        add += square;
    }
    cout << add - 1;
}
int main()
{
    ll int x, n;
    cin >> x >> n;
    printEquation(x, n);

    return 0;
}
