#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int  a , b ,c ;
    cin>> a>> b>> c;
    long long int count= 1;
   
    for(int i=a;i<=b;i++){
     count*=i;
     count%=c;
    }
    cout<<count<<endl;
    return 0;
}