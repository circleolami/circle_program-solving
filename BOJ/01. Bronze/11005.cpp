#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string M;
    int N, B;

    cin >> N >> B;

    while (N)
    {
        int temp = N % B;
        if (temp > 9)
        {
            temp = temp - 10 + 'A';
            M += temp;
        }
        else
            M += temp + '0';
        N /= B;
    }

    reverse(M.begin(), M.end());

    cout << M << "\n";

    return 0;
}