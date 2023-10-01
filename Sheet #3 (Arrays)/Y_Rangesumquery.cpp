// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     ll int n,q;
//     cin>>n>>q;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     while(q--){
//       ll  int a, b, sum=0;
//         cin>>a>>b;
//         for(int i=a-1; i<b; i++){
//             sum += arr[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute prefix sum array
    vector<ll int> prefix_sum(n+1);
    prefix_sum[0] = 0;
    for(int i=0; i<n; i++){
        prefix_sum[i+1] = prefix_sum[i] + arr[i];
    }

    while(q--){
        ll int a, b, sum=0;
        cin >> a >> b;
        sum = prefix_sum[b] - prefix_sum[a-1];
        cout << sum << endl;
    }
    return 0;
}
