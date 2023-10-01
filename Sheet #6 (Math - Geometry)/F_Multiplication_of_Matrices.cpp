#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b;
   cin>>a>>b;
   int arr[a][b];
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
       cin>>arr[i][j];
    }
   }
   int c , d;
   cin>> c>>d;
   int arr2[c][d];
   for(int i=0;i<c;i++){
    for(int j=0;j<d;j++){
        cin>>arr2[i][j];
    }
   }

int result[a][d];
for(int i=0;i<a;i++){
    for(int j=0;j<d;j++){
       result[i][j]=0;
       for(int k=0;k<b;k++){
        result[i][j]+=arr[i][k]*arr2[k][j];
       }
    }
}
for(int i=0;i<a;i++){
    for(int j=0;j<d;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}