#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[100000];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] < 0)
    {
      cout << "2"
           << " ";
    }
    else if (arr[i] > 0)
    {
      cout << "1"
           << " ";
    }
    else if (arr[i] == 0)
    {
      cout << "0"
           << " ";
    }
  }
  return 0;
}