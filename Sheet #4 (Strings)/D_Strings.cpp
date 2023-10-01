
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() << endl;
    string connect(a + b);
    cout << connect << endl;
    swap(a[0], b[0]);
    cout << a << " " << b << endl;

    return 0;
}
