#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int N, num, max = 0;
    cin >> N;
    while (cin >> num)
    {
        if (num > max)
        {
            max = num;
        }
    }
    cout << max << endl;
    return 0;
}

