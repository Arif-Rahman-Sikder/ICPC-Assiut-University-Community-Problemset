#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        bool valid = false;
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                valid = true;
                break;
            }
            else if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                valid = true;
                break;
            }
        }

        if (valid)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
    return 0;
}
