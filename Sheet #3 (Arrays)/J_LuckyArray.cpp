#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    int min_element = 1000000;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int arr[i];
        cin >> arr[i];
        if (arr[i] < min_element)
        {
            min_element = arr[i];
            count=1;
        }
        else if (arr[i] == min_element)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }

    return 0;
}
