#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        bool found = false;
        for (long long a = 1; a <= min((long long)1e6, x); a++) {
            if (x % a == 0) {
                long long bc = x / a;
                long long b = bc - 1;
                long long c = 1;
                if (b >= 1 && b <= 1e6) {
                    cout << a << " " << b << " " << c << endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found) {
            cout << "-1" << endl;
        }
    }
    return 0;
}
