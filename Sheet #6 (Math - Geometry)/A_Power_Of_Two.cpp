
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;
    ((ceil(log2(n)) == floor(log2(n)))) ? cout << "YES" : cout << "NO";
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// double n,c;
//     cin>>n>>c;
//     cout<<ceil(n/c)<<endl;
//     cout<<floor(n/c)<<endl;
//     return 0;
// }