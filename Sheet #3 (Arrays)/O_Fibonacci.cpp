// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll int fib (int n){
//     if(n==1){
//         return 0;
//     }else if(n==2){
//         return 1;

//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }

// int main()
// {
//   ll int n;
//   cin>>n;
//   cout<<fib(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long int n;
//     cin >> n;

//     int fib[2] = {0, 1}; 
//     if (n == 1) {
//         cout << fib[0] << endl;
//     } else if (n == 2) {
//         cout << fib[1] << endl;
//     } else {
//         for (int i = 3; i <= n; i++) {
//             int current = fib[0] + fib[1];
//             fib[0] = fib[1];
//             fib[1] = current;
//         }
//         cout << fib[1] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

unordered_map<ll, ll> memo;

ll int fib (ll n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }
    else if (memo.find(n) != memo.end()) {
        return memo[n];
    }
    else {
        ll result = fib(n-1)+fib(n-2);
        memo[n] = result;
        return result;
    }
}

int main()
{
  ll int n;
  cin>>n;
  cout<<fib(n);
    return 0;
}
