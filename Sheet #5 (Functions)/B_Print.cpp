#include <bits/stdc++.h>
using namespace std;
void printing(int x)
{

    for (int i = 1; i <= x; i++)
    {

        if (i < x)
        {
            cout << i << " ";
        }
        else
            cout << i;
    }
}

int main()
{
    int n;
    cin >> n;
    printing(n);
}