#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    double answer=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<fixed<<setprecision(9)<<answer;
    

    return 0;
}