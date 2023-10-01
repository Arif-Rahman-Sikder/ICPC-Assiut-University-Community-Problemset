// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,i;
//     cin>>n;
//     int arr[n];
//     int min_element=1000000;
//     for( i=0;i<n;i++){
//         cin>>arr[i];
//         arr[0]=min_element;
        
//         if(arr[0]<arr[i]){
//             swap(arr[0],arr[i]);
//         }
//         }
//         cout<<arr[i]<<" ";
    
//     return 0;
// }
 

//using stl
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the minimum and maximum elements using iterators
    vector<int>::iterator min_it = min_element(arr.begin(), arr.end());
    vector<int>::iterator max_it = max_element(arr.begin(), arr.end());

    // Swap the minimum and maximum elements using iterators
    swap(*min_it, *max_it);

    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
