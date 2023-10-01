#include <iostream>
using namespace std;

int count_vowels(string s)
{
    if (s.empty())
    {

        return 0;
    }
    else
    {
        int count = count_vowels(s.substr(1));
        if (s[0] == 'a' || s[0] == 'A' ||
            s[0] == 'e' || s[0] == 'E' ||
            s[0] == 'i' || s[0] == 'I' ||
            s[0] == 'o' || s[0] == 'O' ||
            s[0] == 'u' || s[0] == 'U')
        {

            count++;
        }
        return count;
    }
}

int main()
{
    string s;
    getline(cin, s);
    cout << count_vowels(s) << endl;
    return 0;
}
