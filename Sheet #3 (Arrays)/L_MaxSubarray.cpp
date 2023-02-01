#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
      cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j <= n; j++)
      {
        cout << *max_element(A + i, A + j) << " ";
      }
    }

    cout << endl;
  }

  return 0;
}
