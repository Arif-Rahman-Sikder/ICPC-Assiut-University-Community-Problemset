#include <iostream>
using namespace std;


long long int factorial(int n) {
    long long int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int a, b;
    cin >> a >> b;

  
    long long int ncr = factorial(a) / (factorial(b) * factorial(a - b));
    long long int npr = factorial(a) / factorial(a - b);

    cout << ncr << " " << npr << endl;

    return 0;
}


// NCR(A, B) = A! / (B! * (A-B)!)
// NPR(A, B) = A! / (A-B)!