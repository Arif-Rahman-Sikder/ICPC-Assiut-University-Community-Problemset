// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[100][100];
//     int pcount=0, scount=0;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//             if(i == j) 
//                 pcount += arr[i][j];
//             if(i + j == n - 1) 
//                 scount += arr[i][j];
//         }
//     }

//     int absoluteDifference = abs(pcount- scount);
//     cout<<absoluteDifference<<endl;

//     return 0;
// }

//using stl

#include<bits/stdc++.h>
//[-(~TheHonestGuy~)-]
using namespace std;

int main() {
    int N;
    cin >> N;

    
    vector<vector<int>> arr(N, vector<int>(N));

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;


    for (int i = 0; i < N; i++) {
        primaryDiagonalSum += arr[i][i]; // Elements on the primary diagonal
        secondaryDiagonalSum += arr[i][N - 1 - i]; // Elements on the secondary diagonal
    }

   
    int absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum);

 
    cout << absoluteDifference << endl;

    return 0;
}