#include <bits/stdc++.h>
using namespace std;
void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    else
        cout << n ;
        if(n>1) cout<<" ";
    printNumbers(n - 1);
}
int main()
{
    int n;
    cin >> n;

    printNumbers(n);
    
    return 0;
}