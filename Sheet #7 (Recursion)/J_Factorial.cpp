#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

//recursive method 
#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int n) {
    if(n == 0) { // base case: 0! = 1
        return 1;
    } else {
        return n * factorial(n - 1); // recursive call
    }
}

int main() {
    long long int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}