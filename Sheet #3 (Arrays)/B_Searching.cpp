

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int x;
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            cout << i << endl;
        return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}