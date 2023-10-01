#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, k;
    cin >> x >> y;
    for (int i = 1; i <= x; i++)
    { // the GCD will always be smaller than the first variable
        if (x % i == 0 && y % i == 0)
            k = i;
    }
    cout << k << endl;
    return 0;
}
