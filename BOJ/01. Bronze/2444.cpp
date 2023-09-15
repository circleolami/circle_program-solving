#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = n - 1; j >= i && i <= n; j--)
            cout << " ";
        for (int j = n - 1; j > 2 * n - i - 1 && i > n; j--)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1 && i <= n; j++)
            cout << "*";
        for (int j = 2 * (n - 1) - 2 * (i - n - 1) - 1; j >= 1 && i > n; j--)
            cout << "*";
        cout << endl;
    }

    return 0;
}