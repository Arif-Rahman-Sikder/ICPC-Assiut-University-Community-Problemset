

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=2;i<=N;i++){
        
        if(i%2 !=0){
            continue;
        }else cout<<i<<endl;
    }
    if(N==1 ||N==-1||N==0){
        cout<<"-1"<<endl;
    }
     return 0;  
}
