/*
Problem URL: https://www.acmicpc.net/problem/2753
Problem Name: 윤년
Author: circleolami
Date: 2023.09.15
Version: 1.0
Algorithm: math
*/
#include <iostream>
using namespace std;

int main()
{
    int year;

    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}