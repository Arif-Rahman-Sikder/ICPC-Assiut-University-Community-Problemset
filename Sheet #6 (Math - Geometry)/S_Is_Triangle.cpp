#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

 
    if (A + B > C && B + C > A && A + C > B) {
   
        double s = (A + B + C) / 2;
   
        double area = sqrt(s * (s - A) * (s - B) * (s - C));
        cout << "Valid" << endl;
        cout << fixed << area << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
// Area = sqrt(s * (s - a) * (s - b) * (s - c))
// Area is the area of the triangle.
// s is the semi-perimeter of the triangle, calculated as (a + b + c) / 2, where a, b, and c are the lengths of the three sides of the triangle.
// a, b, and c are the lengths of the three sides of the triangle.
// sqrt() denotes the square root function, which gives the positive square root of a number.