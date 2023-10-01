// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     double add=0;
//     double division;
//     double arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//         division=arr[i]/n;
//         add+=division;
//     }

//     cout<<fixed<<setprecision(7)<<add;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void average(double arr[], int n)
{
    double add = 0;
    for (int i = 0; i < n; i++)
    {

        double division = arr[i] / n;
        add += division;
    }
    cout << fixed << setprecision(7) << add;
}

int main()
{
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    average(arr, n);
    return 0;
}