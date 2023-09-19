/*
Problem URL: https://www.acmicpc.net/problem/10988
Problem Name: 팰린드롬인지 확인하기
Author: circleolami
Date: 2023.09.15
Version: 1.0
Algorithm: none
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int len;

    cin >> s;
    len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] == s[len - i - 1])
            continue;
        else
        {
            cout << "0" << endl;
            return 0;
        }
    }
    cout << "1" << endl;

    return 0;
}