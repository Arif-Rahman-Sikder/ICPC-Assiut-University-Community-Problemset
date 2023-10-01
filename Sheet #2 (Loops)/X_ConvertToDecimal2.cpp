#include <bits/stdc++.h>
using namespace std;

int countOnes(int n) {
    int cnt = 0;
    while(n) {
        cnt += n&1;
        n >>= 1;
    }
    return cnt;
}

int decimalWithOnes(int n, int cnt) {
    int ans = 0, p = 1;
    while(cnt--) {
        ans += p;
        p *= 2;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cntOnes = countOnes(n);
        int ans = decimalWithOnes(n, cntOnes);
        cout << ans << endl;
    }
    return 0;
}
