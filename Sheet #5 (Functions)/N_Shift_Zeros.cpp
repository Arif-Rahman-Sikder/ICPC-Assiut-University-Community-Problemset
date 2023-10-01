#include <iostream>
using namespace std;

void shiftZeros(int arr[], int n) {
    int nonZeroIndex = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i]; 
        }
    }

    while (nonZeroIndex < n) {
        arr[nonZeroIndex++] = 0;
    }
}

int main() {
    int n;
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    shiftZeros(arr, n); 
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
