#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;

    cin>>n>>q;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end()); 
    while(q--){
        int x;
        cin>>x;
        bool found = binary_search(arr.begin(), arr.end(), x); 
        if(found) {
          cout<<"found"<<endl;
        } else {
          cout<<"not found"<<endl;
        }
    }
  
    return 0;
}

