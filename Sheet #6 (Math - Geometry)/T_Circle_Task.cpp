#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int a ,b , c ,d;
    bool inside=true;
    cin>>a>>b>>c>>d;
    while(d--){
       ll int f, g ;
       cin>>f>>g;

    int distance = (f-a)*(f-a)+(g-b)*(g-b);
    if(distance<=c*c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    }
    
    return 0;
}