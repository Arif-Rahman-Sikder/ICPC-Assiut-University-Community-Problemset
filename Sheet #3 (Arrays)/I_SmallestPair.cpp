

#include<bits/stdc++.h>
//ARIF RAHMAN SIKDER(THEHONESTGUY-> with big dreams)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    vector<int> arr(t);
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
        int Msum=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum = arr[i]+arr[j]+j-i;
                Msum=min(Msum, sum);
                
            }
        }
        cout<<Msum<<endl;
    }
    return 0;
}