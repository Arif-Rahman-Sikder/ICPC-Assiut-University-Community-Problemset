#include <iostream>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    if (a > b)
        swap(a, b);
 if (a % x != 0) {
    int p = (a / x) + 1;
    a = p * x;
} else {
    a = a;
}

if (b % x != 0) {
    b = (b / x);
    b = b * x;
} else {
    b = b;
}

if (a == b) {
    cout << a << endl;
} else {
    int n = ((b - a) / x) + 1;
    long long int sum = (n - 1) * x + (2 * a);
    sum *= n;
    sum /= 2;
    cout << sum << endl;
}

    return 0;
}
