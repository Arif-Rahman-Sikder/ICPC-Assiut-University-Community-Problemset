#include<bits/stdc++.h>
using namespace std;
int maxNumber(int arr[], int n){
    if(n==1){
        return arr[0];
    }else {
        int mid=n/2;
        int leftMax=maxNumber(arr,mid);
        int rightMax=maxNumber(arr+mid,n-mid);
        return max(leftMax,rightMax);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< maxNumber(arr,n);

    return 0;
}
