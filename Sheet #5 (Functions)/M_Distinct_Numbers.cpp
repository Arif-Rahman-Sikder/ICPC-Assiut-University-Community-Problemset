#include <bits/stdc++.h>
using namespace std;

void sortingArray(int arr[], int n){
    sort(arr, arr+n);
}

int findingDistint(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
         if(i == 0 || arr[i]!=arr[i-1]){ 
            count++;
        }
    }
    return count; 
}
int main(){
    int n;
    cin>>n;
    int count=0; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortingArray(arr, n);
    count = findingDistint(arr, n); 
    cout << count << endl; 
}
