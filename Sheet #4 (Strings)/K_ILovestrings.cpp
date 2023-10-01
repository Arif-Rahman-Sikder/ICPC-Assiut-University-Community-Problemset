#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s, t;
        cin >> s >> t;

        string result;

        int min_len = min(s.size(), t.size());

        for (int i = 0; i < min_len; i++) {
            result += s[i];
            result += t[i];
        }

        if (s.size() > t.size()) {
            result += s.substr(min_len);
        } else if (t.size() > s.size()) {
            result += t.substr(min_len);
        }

        cout << result << endl;
    }

    return 0;
}
