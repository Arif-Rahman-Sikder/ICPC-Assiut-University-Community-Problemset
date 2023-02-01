

#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n,sum = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      scanf ("%1d", &arr[i]);
      sum = sum + arr[i];
    }
  cout << sum << endl;
}