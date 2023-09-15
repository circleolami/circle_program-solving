#include <iostream>
using namespace std;

int main()
{
    int total, n, a, b, sum = 0;

    cin >> total >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum += a * b;
    }

    if (sum == total)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}