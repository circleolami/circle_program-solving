#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int len;

    cin >> s;
    len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == s[len - i - 1])
            continue;
        else
        {
            cout << "0" << endl;
            return 0;
        }
    }
    cout << "1" << endl;

    return 0;
}