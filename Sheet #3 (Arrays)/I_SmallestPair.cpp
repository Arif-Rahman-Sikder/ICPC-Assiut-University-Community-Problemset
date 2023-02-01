#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[1000000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int min_sum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                min_sum = min(min_sum, sum);
            }
        }
        cout << min_sum << endl;
    }
    return 0;
}