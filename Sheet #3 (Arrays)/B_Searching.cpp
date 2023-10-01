// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int A[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     int x;
//     cin >> x;

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] == x)
//         {
//             cout << i << endl;
//          return 0;
//         }
//     }
//     cout << "-1" << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int x;
    cin >> x;

    auto it = find(A.begin(), A.end(), x); // Search for x in the vector

    if (it != A.end())
    {
        int index = distance(A.begin(), it); // Calculate the index of x
        cout << index << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}