/*
Problem URL: https://www.acmicpc.net/problem/2745
Problem Name: 진법 변환
Author: circleolami
Date: 2023.09.18
Version: 1.0
Algorithm: math
*/
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