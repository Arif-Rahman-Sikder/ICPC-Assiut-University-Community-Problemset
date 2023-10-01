#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n, y, m, d, A;
  cin >> n;
  A = (n % 365);
  y = (n / 365);
  m = (A / 30);
  d = (A % 30);
  cout << y << " years" << endl;
  cout << m << " months" << endl;
  cout << d << " days" << endl;

  return 0;
}

//2nd method
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a;
  cin >> a;
  int years = (a / 365);
  int months = ((a % 365) / 30);
  int days = ((a % 365) % 30);

  cout << years << " years"<< endl;
  cout << months << " months"<< endl;
  cout << days << " days"<< endl;
  return 0;
}  