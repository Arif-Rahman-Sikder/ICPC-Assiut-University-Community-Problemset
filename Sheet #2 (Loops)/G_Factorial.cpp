#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
      fac = fac * i;
    }
    cout << fac << endl;
  }
  return 0;
}

// normal way to find factorial

#include <bits/stdc++.h>
using namespace std;
#define long long int
int main()
{
  int n, fact = 1;

  cin >> n;

  for (int i = 1; i <= n; i++)
  {

    fact *= i;
  }

  cout << fact << endl;

  return 0;
}
