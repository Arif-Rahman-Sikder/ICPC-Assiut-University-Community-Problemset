// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     string s;
//     cin >> s;
//    for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//         if(s[i]>s[j]){
//             swap(s[i],s[j]);
//         }
//        }
//    }
//     cout << s << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

void merge(string& s, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    char L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = s[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = s[m + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            s[k] = L[i];
            i++;
        } else {
            s[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        s[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        s[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(string& s, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(s, l, m);
        mergeSort(s, m + 1, r);
        merge(s, l, m, r);
    }
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    mergeSort(s, 0, n - 1);
    cout << s << endl;
    return 0;
}
