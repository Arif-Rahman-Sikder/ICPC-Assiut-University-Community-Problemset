// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         int count = 0;
//         int start = 0, end = 0;
//         for (int i = 1; i < n; i++) {
//             if (arr[i] >= arr[i-1]) {
//                 end++;
//             } else {
//                 count += (end - start + 1) * (end - start) / 2;
//                 start = end = i;
//             }
//         }
//         count += (end - start + 1) * (end - start) / 2;
//         count += n;  // add n for the singleton subarrays

//         cout << count << endl;
//     }

//     return 0;
// }

// using stl

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;
        int length = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] >= arr[i - 1]) {
                length++;
            } else {
                count += (length * (length + 1)) / 2;
                length = 1;
            }
        }

        count += (length * (length + 1)) / 2;

        cout << count << endl;
    }

    return 0;
}
