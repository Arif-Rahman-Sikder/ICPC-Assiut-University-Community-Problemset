// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     ll int n;
//     cin>>n;
//     ll int sum=0;
//     int arr[100000];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum+=arr[i];
//     }
 
    
//     (sum<0)? cout<<abs(sum) : cout<<sum;
    
    
 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll sum=0;
    ll n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
     
      cout<<((sum<0)? abs(sum):sum);
    
  
    return 0;
}