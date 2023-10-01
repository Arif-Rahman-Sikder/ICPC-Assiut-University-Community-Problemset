#include <bits/stdc++.h>
using namespace std;
void baseConversion(int n)
{
    if (n == 0)
    {
        return;
    }
    baseConversion(n / 2);
    cout << n % 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        baseConversion(n);
        cout << endl;
    }
    return 0;
}