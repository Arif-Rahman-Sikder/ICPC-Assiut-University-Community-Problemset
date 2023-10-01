//first approach
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    int min_element = 1000000;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int arr[i];
        cin >> arr[i];
        if (arr[i] < min_element)
        {
            min_element = arr[i];
            count=1;
        }
        else if (arr[i] == min_element)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }

    return 0;
}



// using stl
#include<bits/stdc++.h>
//ARIF RAHMAN SIKDER(THEHONESTGUY-> with big dreams)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int minElement = *min_element(a.begin(), a.end()); 
    int minFreq = count(a.begin(), a.end(), minElement);

    if(minFreq % 2 != 0){
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}

//another approach using INT_MAX

#include<bits/stdc++.h>
//ARIF RAHMAN SIKDER(THEHONESTGUY-> with big dreams)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    
    int Mnumber = INT_MAX; // Initialize Mnumber to a large value

    for(int i = 0; i < n; i++){
        cin >> a[i];
        Mnumber = min(Mnumber, a[i]); // Update Mnumber with the minimum value
    }

    for(int i = 0; i < n; i++){
        if(a[i] == Mnumber){
            cnt++;
        }
    }

    if(cnt % 2 != 0){
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}
