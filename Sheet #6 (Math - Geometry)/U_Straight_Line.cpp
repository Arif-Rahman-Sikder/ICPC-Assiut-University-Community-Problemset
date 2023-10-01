#include <iostream>
using namespace std;
#define ll long  long
int main() {
   ll int x1, y1, x2, y2, x3, y3;
//formula to find if they are collinear
    if((x2-x1)*(y3-y2) - (y2-y1)*(x3-x2)==0){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    return 0;
}

// It does so by calculating the cross product of the vectors (x2-x1,y2-y1) and (x3-x2,y3-y2).