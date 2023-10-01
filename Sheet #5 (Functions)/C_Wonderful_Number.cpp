#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int n) {
    
    int orig = n;
    int reversed = 0;
    while (n > 0) {
        int rem = n % 2;
        reversed = (reversed << 1) | rem;
        n = n >> 1;
    }
    return orig == reversed;
}

void wonderfulNumber(int n) {
   
    if (n & 1) {
        if (is_palindrome(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    wonderfulNumber(n);
    return 0;
}
