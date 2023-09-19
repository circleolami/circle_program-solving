/*
Problem URL: https://www.acmicpc.net/problem/25304
Problem Name: 영수증
Author: circleolami
Date: 2023.09.15
Version: 1.0
Algorithm: math
*/
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