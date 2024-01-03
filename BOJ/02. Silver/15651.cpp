/*
Problem URL: https://www.acmicpc.net/problem/15651
Problem Name: N과 M (3)
Author: circleolami
Date: 2024.01.03
Version: 1.0
Algorithm: backtracking
*/

#include <iostream>

#define MAX 9

using namespace std;

int N, M;
int arr[MAX] = {
    0,
};

void dfs(int cnt)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << "\n";

        return;
    }

    for (int i = 1; i <= N; i++)
    {
        arr[cnt] = i;
        dfs(cnt + 1);
    }
}

int main()
{
    cin >> N >> M;
    dfs(0);

    return 0;
}