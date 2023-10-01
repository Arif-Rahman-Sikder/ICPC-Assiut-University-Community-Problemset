#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double center_A[2] = {(x1 + x2) / 2.0, (y1 + y2) / 2.0};
    double center_B[2] = {(x3 + x4) / 2.0, (y3 + y4) / 2.0};

    double distance = sqrt(pow(center_B[0] - center_A[0], 2) + pow(center_B[1] - center_A[1], 2));

    double radius_A = sqrt(pow(x1 - center_A[0], 2) + pow(y1 - center_A[1], 2));
    double radius_B = sqrt(pow(x3 - center_B[0], 2) + pow(y3 - center_B[1], 2));

    double sum_of_radii = radius_A + radius_B;

    if (distance > sum_of_radii) {
        cout << "NO" << endl;
    }
    else if (distance == sum_of_radii) {
        cout << "YES" << endl;
    }
    else {
        cout << "YES" << endl;
    }

    return 0;
}