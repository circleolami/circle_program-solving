#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int max, max_index;

    for (int i = 0; i < 9; i++)
        cin >> arr[i];

    max = arr[0];
    max_index = 0;

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }

    cout << max << endl;
    cout << max_index + 1 << endl;

    return 0;
}