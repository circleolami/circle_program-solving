/*
Problem URL: https://www.acmicpc.net/problem/3003
Problem Name: 킹, 퀸, 룩, 비숍, 나이트, 폰
Author: circleolami
Date: 2023.09.15
Version: 1.0
Algorithm: math
*/
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