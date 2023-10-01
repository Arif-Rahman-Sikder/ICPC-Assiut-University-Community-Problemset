// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//   string str1, str2;
//   cin >> str1 >> str2;
//   if (str1.compare(str2) < 0)
//     cout << str1;
//   else if (str1.compare(str2) == 0)
//     cout << str2;
//   else if (str1.compare(str2) > 0)
//     cout << str2;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, y;
  cin >> s >> y;
  if (s.compare(y) < 0)
  {
    cout << s;
  }
  else if (s.compare(y) == 0)
  {
    cout << y;
  }
  else if (s.compare(y) > 0)
  {
    cout << y;
  }
  return 0;
}