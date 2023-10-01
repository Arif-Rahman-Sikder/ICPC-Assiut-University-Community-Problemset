

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    auto minElement = min_element(arr.begin(), arr.end());
    int index = distance(arr.begin(), minElement);
    cout << *minElement << " " << (index + 1) << endl;
    return 0;
}