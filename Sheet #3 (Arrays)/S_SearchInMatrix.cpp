
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     bool number = false;
//     int arrays;
//     int n, m, x;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cin >> x;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {

//             if (x == arr[i][j])
//             {
//                 number = true;
//                 break;
//             }
//         }
//         if (number)
//         {
//             break;
//         }
//     }
//     if (number)
//     {
//         cout << "will not take number" << endl;
//     }
//     else
//         cout << "will take number" << endl;
//     return 0;
// }

//using stl

#include <bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> arr(N, vector<int>(M));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    int X;
    cin >> X;

    bool found = false;
    for (int i = 0; i < N; i++)
    {
        if (find(arr[i].begin(), arr[i].end(), X) != arr[i].end())
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "will not take number" << endl;
    }
    else
    {
        cout << "will take number" << endl;
    }

    return 0;
}
