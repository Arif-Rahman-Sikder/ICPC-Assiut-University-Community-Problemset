#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        
        int xmin = INT_MIN, ymin = INT_MIN, xmax = INT_MAX, ymax = INT_MAX;
        for(int j = 1; j <= n; j++) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            xmin = max(xmin, x1);
            ymin = max(ymin, y1);
            xmax = min(xmax, x2);
            ymax = min(ymax, y2);
        }
        
        int area = max(0, xmax - xmin) * max(0, ymax - ymin);
        
        cout << "Case #" << i << ": " << area << endl;
    }
    // The code calculates the area of the intersection rectangle using the formula (x2 - x1) * (y2 - y1).
    return 0;
}
