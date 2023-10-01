#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    long long int num = 0;
    for(int i=0;i<n.size();i++){
       num=num*10+(n[i]-'0');
}
    long long int sum = num + 9999;
    long long int product = num * 9999;

    cout << sum << endl;
    cout << product << endl;

    return 0;
}
