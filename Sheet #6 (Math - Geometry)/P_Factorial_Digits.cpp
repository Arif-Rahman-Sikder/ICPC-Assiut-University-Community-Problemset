#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double logFact = 0;
    for (int i = 2; i <= n; i++) {
        logFact += log10(i);
    }

    int digits = ceil(logFact);

    cout << "Number of digits of " << n << "! is " << digits << endl;
    return 0;
}
