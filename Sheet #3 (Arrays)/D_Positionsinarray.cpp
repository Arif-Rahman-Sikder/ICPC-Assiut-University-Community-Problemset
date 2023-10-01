#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 10)
        {
            cout << "A[" << i << "]" << " = " << arr[i] << endl;
        }
    }

    return 0;
}