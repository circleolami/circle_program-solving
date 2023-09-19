/*
Problem URL: https://www.acmicpc.net/problem/1330
Problem Name: 두 수 비교하기
Author: circleolami
Date: 2023.09.15
Version: 1.0
Algorithm: none
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a > b)
        cout << '>' << endl;
    else if (a < b)
        cout << '<' << endl;
    else
        cout << "==" << endl;

    return 0;
}