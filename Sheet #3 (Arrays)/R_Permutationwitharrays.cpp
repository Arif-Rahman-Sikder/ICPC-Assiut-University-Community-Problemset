// #include <bits/stdc++.h>
// using namespace std;

// const int MAXN = 1005;

// // int a[MAXN], b[MAXN], countA[MAXN], countB[MAXN];
// int counta=0;
// int countb=0;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n], arr2[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         counta+=arr[i];
//     }

//     for (int i = 0; i < n; i++) {
//         cin >> arr2[i];
//         countb+=arr2[i];
//     }

//     for (int i = 1; i <= n; i++) {
//         if (counta != countb) {
//             cout << "no" << endl;
//             return 0;
//         }
//     }

//     cout << "yes" << endl;
//     return 0;
// }

//using stl

#include<bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std; 
int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Sort both arrays
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // Check if the sorted arrays are equal
    if (A == B) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
