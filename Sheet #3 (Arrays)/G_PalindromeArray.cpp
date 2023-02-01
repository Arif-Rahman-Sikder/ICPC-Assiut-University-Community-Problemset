#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool ispalindrome = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            ispalindrome = false;
        }
    }
    if (ispalindrome)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}

