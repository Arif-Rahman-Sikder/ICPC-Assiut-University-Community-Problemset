// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {

//   int t;
//   cin >> t;

//   while (t--)
//   {

//     int n;
//     cin >> n;
//     int A[n];
//     for (int i = 0; i < n; i++)
//     {
//       cin >> A[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//       for (int j = i + 1; j <= n; j++)
//       {
//         cout << *max_element(A + i, A + j) << " ";
//       }
//     }

//     cout << endl;
//   }

//   return 0;
// }


// using stl

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                vector<int> subarray(A.begin() + i, A.begin() + j);
                cout << *max_element(subarray.begin(), subarray.end()) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
