#include <iostream>
#define ull unsigned long long

using namespace std;

ull int sum1(int a, int b)
{
    ull int d = 1;
    ull int n = b - a;
    ull int sum = (2 * a) + (n * d);
    n++;
    sum = n * sum;
    sum = sum / 2;
    return sum;
}

ull int sum2(int a, int b)
{
    ull int d = 2;
    if (a % 2 == 1)
        a++;
    if (b % 2 == 1)
        b--;
    ull int n = (b - a) / 2;
    ull int sum = (2 * a) + (n * d);
    n++;
    sum = n * sum;
    sum = sum / 2;
    return sum;
}

ull int sum3(int a, int b)
{
    ull int d = 2;
    if (a % 2 == 0)
        a++;
    if (b % 2 == 0)
        b--;
    ull int n = (b - a) / 2;
    ull int sum = (2 * a) + (n * d);
    n++;
    sum = n * sum;
    sum = sum / 2;
    return sum;
}

int main()
{

    ull int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    cout << sum1(a, b) << endl;
    cout << sum2(a, b) << endl;
    cout << sum3(a, b) << endl;

    return 0;
}
