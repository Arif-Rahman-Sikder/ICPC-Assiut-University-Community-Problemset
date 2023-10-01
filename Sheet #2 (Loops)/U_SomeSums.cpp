#include <iostream>
using namespace std;

int main() {
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        int digitSum = 0;
        int temp = i;
        while (temp > 0) {
            digitSum += temp % 10;
            temp /= 10;
        }

        if (digitSum >= a && digitSum <= b) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
