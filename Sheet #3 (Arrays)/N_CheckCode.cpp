
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b;
//     bool checked = true;
//     cin >> a >> b;
//     string s;
//     cin >> s;
//     if (s[a] == '-' && s.size() == a + b + 1)
//     {
//         for (int i = 0; i < a + b + 1; i++)
//         {
//             if (i == a)
//             {
//                 continue;
//             }
//             if (s[i] < '0' || s[i] > '9')
//             {
//                 checked = false;
//             }
//             else
//                 checked;
//         }
//         if (checked)
//         {
//             cout << "Yes" << endl;
//         }
//         else
//             cout << "No" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }

//     return 0;
// }

// using stl
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    vector<char> s(a + b + 1);

    for (int i = 0; i < s.size(); i++)
    {
        cin >> s[i];
    }

    bool checked = true;

    if (s[a] == '-')
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i == a)
            {
                continue;
            }
            char c = s[i];
            if (!isdigit(c))
            {
                checked = false;
                break; // No need to continue checking
            }
        }

        if (checked)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
