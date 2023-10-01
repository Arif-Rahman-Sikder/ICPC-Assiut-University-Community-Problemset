#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, temp;
    cin >> a >> b;
    long long c = a * b;
    while (b != 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }

    cout << a << " " << c / a;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// long long int  a , b;
// cin>>a >> b;
// cout<<__gcd(a,b)<<" "<<(a*b)/__gcd(a,b);
//     return 0;
// }