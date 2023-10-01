#include <bits/stdc++.h>
using namespace std;
#define int long long
void wonderful(int N)

{
     bool primary=true;
    if (N % 2 != 0 && (N>>1) && (N<<1))
    {
       primary=true;
    }
    else
    primary=false;
    
}
int primary(int n){
    if(primary){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}


int main()
{
     int n;
    cin >> n;
    wonderful(n);
    primary(n);

    return 0;
}
