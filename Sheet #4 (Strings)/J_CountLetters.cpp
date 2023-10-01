#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[26];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < (int)s.size(); i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            char c = 'a' + i;
            cout << c << " : " << arr[i] << endl;
        }
    }
    return 0;
}