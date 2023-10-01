#include<bits/stdc++.h>
using namespace std;

bool isWordChar(char c) {
    
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main(){
    string s;
    getline(cin, s);
    int cnt = 0;
    bool wordStarted = false;
    for(int i = 0; i < s.size(); i++) {
        if(isWordChar(s[i])) {
            if(!wordStarted) {
                cnt++;
                wordStarted = true;
            }
        } else {
            wordStarted = false;
            if(s[i] == '.' && (i == s.size() - 1 || s[i + 1] == ' ')) {
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
