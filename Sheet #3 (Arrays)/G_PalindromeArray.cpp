// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// // 🅰🆁🅸🅵 🆁🅰🅷🅼🅰🅽 🆂🅸🅺🅳🅴🆁
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int n;
//     cin >> n;
//    vector<int> arr(n);
//     bool ispalindrome = true;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (arr[i] != arr[n - i - 1])
//         {
//             ispalindrome = false;
//         }
//     }
//     if (ispalindrome)
//     {
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO" << endl;

//     return 0;
// }

// using stl

#include <bits/stdc++.h>
using namespace std;

   
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> Copyarr=arr;
    reverse(Copyarr.begin(),Copyarr.end());
    if(Copyarr == arr){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
  
 
    return 0;
}

