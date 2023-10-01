#include <bits/stdc++.h>
using namespace std;

void printdigitsusingRecursion(int a) {
  if(a==0||a<10){
    cout<<a<<" ";
    return ;
  }else {
    printdigitsusingRecursion(a/10);
    cout<<a%10<<" ";
  }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        printdigitsusingRecursion(a);
        cout << endl;
    }
    return 0;
}
