#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int balance = 0;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            balance++;
        }
        else
            balance--;
        if (balance == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    count = 0;
    balance = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            balance++;
        }
        else
            balance--;

        if (balance == 0)
        {
            cout << s.substr(i - count, count + 1) << endl;
            count = 0;
        }
        else
        {   
            count++;
        }
    }
    return 0;
}