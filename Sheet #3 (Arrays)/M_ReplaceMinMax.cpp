#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    int min_element=1000000;
    for( i=0;i<n;i++){
        cin>>arr[i];
        arr[0]=min_element;
        
        if(arr[0]<arr[i]){
            swap(arr[0],arr[i]);
        }
        }
        cout<<arr[i]<<" ";
    
    return 0;
}