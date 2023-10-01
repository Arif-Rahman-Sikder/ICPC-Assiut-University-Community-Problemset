// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     bool all_even = true;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int count = 0;
//     while (all_even)
//     {

//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] & 1)
//             {
//                 all_even = false;
//                 break;
//             }
//         }
//         if (all_even)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 arr[i] /= 2;
//             }
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }

//     cout << count << endl;

//     return 0;
// }

// using stl
#include<bits/stdc++.h>
//ARIF RAHMAN SIKDER(THEHONESTGUY-> with big dreams)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
  while (all_of(arr.begin(), arr.end(), [](int x) { return (x % 2 == 0); })) {
        for_each(arr.begin(), arr.end(), [](int &x) { x /= 2; });
        count++;
    }
cout<<count<<endl;
    return 0;
}
