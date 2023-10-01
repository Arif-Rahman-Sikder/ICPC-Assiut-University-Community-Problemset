#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    bool isParallel = (y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1);
    cout << (isParallel ? "YES" : "NO") << endl;
    return 0;
}

