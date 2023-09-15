#include <iostream>
using namespace std;

int main()
{
    int ans[8] = {1, 1, 2, 2, 2, 8};
    int now[8];

    for (int i = 0; i < 6; i++)
        cin >> now[i];
    for (int i = 0; i < 6; i++)
        cout << ans[i] - now[i] << ' ';

    return 0;
}