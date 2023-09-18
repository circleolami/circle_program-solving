#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string N;
    int B, M = 0, len, temp = 0;

    cin >> N >> B;
    len = N.length();

    while (temp < len)
    {
        if (N[temp] >= 'A' &&
            N[temp] <= 'Z')
            M += (N[temp] - 'A' + 10) * pow(B, len - temp - 1);
        else
            M += (N[temp] - '0') * pow(B, len - temp - 1);
        temp++;
    }

    cout << M << endl;

    return 0;
}