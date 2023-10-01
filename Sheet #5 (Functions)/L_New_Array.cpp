#include <iostream>
using namespace std;

void arrayprint(int arr[], int arr2[], int n) {
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


   
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

}

int main() {
    int n;
    cin >> n;
    int arr[n], arr2[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    arrayprint(arr2, arr, n);

    return 0;
}
