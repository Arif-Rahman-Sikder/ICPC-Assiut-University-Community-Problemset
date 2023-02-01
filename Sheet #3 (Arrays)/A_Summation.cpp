#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int n;
    cin>>n;
    ll int sum=0;
    int arr[100000];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
 
    
    (sum<0)? cout<<sum*(-1) : cout<<sum;
    
    
 
    return 0;
}