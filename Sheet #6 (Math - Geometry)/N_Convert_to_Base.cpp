#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,x;
    cin >> t;
  
    if(t == 1)
    {
        string n;
        cin >> n >> x;
        long long len = n.size(),res = 0,base = 1;
        for(long long k=len-1 ; k>=0 ; k--)
        {
            if(n[k]>='0' && n[k]<='9')
            {
                res += ((n[k])-48)*base;
                base *= x;
            }
            else if(n[k]>='A' && n[k]<='Z')
            {
                res += ((n[k])-55)*base;
                base *= x;
            }
        }
        cout << res;
    }
    else
    {
        long long n;
        cin >> n >> x;
        long long rem,arr[35],i = 0;
        while(n!=0)
        {
            rem = n % x;
            n/=x;
            arr[i] = rem;
            i++;
        }
        for(int c=i-1 ; c>=0 ; c--)
        {
            if(arr[c] > 9)
            {
                char ch = arr[c]+55;
                cout << ch;
            }
            else
                cout << arr[c];
        }
    }
    return 0;
}