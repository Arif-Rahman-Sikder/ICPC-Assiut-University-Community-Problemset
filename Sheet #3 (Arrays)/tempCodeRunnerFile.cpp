#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  string digits_str;
  cin >> digits_str;

  int summation = 0;

  for (char c : digits_str) {
    
    summation += c - '0';
  }

  // Print the summation
  cout << summation << endl;

  return 0;
}