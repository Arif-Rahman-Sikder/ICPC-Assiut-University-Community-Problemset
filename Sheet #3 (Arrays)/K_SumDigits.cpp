
//1st approach
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

// 2nd approach
 #include<bits/stdc++.h>
 using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int cnt = 0;
    vector<char> arr(t);

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
        int element = arr[i] - '0'; // Convert char to int
        cnt += element;
    }

    cout << cnt;

    return 0;
}

// using stl
//done using lamda function
#include <bits/stdc++.h>
// ARIF RAHMAN SIKDER(THEHONESTGUY-> with big dreams)
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  string s;
  cin >> s;
  int cnt = accumulate(s.begin(), s.end(), 0,
                       [](int total, char s)
                       {                    //lambda function 
                         return total + (s - '0');
                       });
  cout << cnt;
  return 0;
}