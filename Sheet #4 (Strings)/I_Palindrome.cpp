#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int start = 0, end = s.size() - 1;
    bool isPalindrome = true;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            isPalindrome = false;
            break;
        }
        else
        {
            isPalindrome;
        }
        start++;
        end--;
    }

    if (isPalindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
