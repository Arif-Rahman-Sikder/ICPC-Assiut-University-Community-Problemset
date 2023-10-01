#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s); // Read input

    // Extract parameter values
    size_t start = s.find("?") + 1;
    size_t end = s.find_last_of("&") + 1;
    string params_str = s.substr(start, end - start);

    // Create a stringstream to parse parameter values
    stringstream ss(params_str);
    vector<string> params;
    string param;

    // Split parameter values by '&' and store them in a vector
    while (getline(ss, param, '&')) {
        params.push_back(param);
    }

    // Print parameter names and values
    for (const string& p : params) {
        size_t name_start = p.find("=") + 1;
        string name = p.substr(0, name_start - 1);
        string value = p.substr(name_start);
        cout << name << ": " << value << endl;
    }

    return 0;
}
