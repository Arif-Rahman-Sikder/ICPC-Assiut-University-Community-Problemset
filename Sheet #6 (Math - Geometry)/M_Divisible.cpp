#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long n, m = 0;
    cin >> s >> n;
    for (int i = 0; i < s.size(); i++)
    {
        m = m * 10 + (s[i] - '0');
        m = m % n;
    }
    if (m == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}