/*
Problem URL: https://www.acmicpc.net/problem/14888
Problem Name: 연산자 끼워넣기
Author: circleolami
Date: 2024.01.03
Version: 1.0
Algorithm: backtracking
*/

#include <iostream>

#define MAX 11

using namespace std;

int N;
int arr[MAX] = {
    0,
};
int op[4] = {
    0,
};
int max_res = -1000000001, min_res = 1000000001;

void ans(int res, int idx);

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = 0; i < 4; i++)
        cin >> op[i];

    ans(arr[0], 1);

    cout << max_res << endl;
    cout << min_res << endl;
}

void ans(int res, int idx)
{
    if (idx == N)
    {
        if (res >= max_res)
            max_res = res;
        if (res <= min_res)
            min_res = res;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (op[i] > 0)
        {
            op[i]--;
            if (i == 0)
                ans(res + arr[idx], idx + 1);
            else if (i == 1)
                ans(res - arr[idx], idx + 1);
            else if (i == 2)
                ans(res * arr[idx], idx + 1);
            else if (i == 3 && arr[idx] != 0)
                ans(res / arr[idx], idx + 1);
            op[i]++;
        }
    }
    return;
}