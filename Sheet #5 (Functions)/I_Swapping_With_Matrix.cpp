#include <iostream>
using namespace std;

const int MAX_N = 500;

void swapRows(int A[MAX_N][MAX_N], int N, int X, int Y) {
    for (int column = 0; column < N; column++) {
        swap(A[X - 1][column], A[Y - 1][column]);
    }
}

void swapColumns(int A[MAX_N][MAX_N], int N, int X, int Y) {
    for (int row = 0; row < N; row++) {
        swap(A[row][X - 1], A[row][Y - 1]);
    }
}

void printMatrix(int A[MAX_N][MAX_N], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N, X, Y;
    int A[MAX_N][MAX_N];

    cin >> N >> X >> Y;

 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    swapRows(A, N, X, Y);

    swapColumns(A, N, X, Y);

    printMatrix(A, N);

    return 0;
}
