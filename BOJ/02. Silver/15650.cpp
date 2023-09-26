/*
Problem URL: https://www.acmicpc.net/problem/15650
Problem Name: N과 M (2)
Author: circleolami
Date: 2023.09.26
Version: 1.0
Algorithm: backtracking
*/

#include <iostream>
#define SIZE 10
using namespace std;

int N, M;
int arr[SIZE] = {
    0,
};
bool visited[SIZE] = {
    0,
};

void print();
void dfs(int num, int cnt);

int main()
{
    cin >> N >> M;
    dfs(1, 0);

    return 0;
}

void print()
{
    for (int i = 0; i < M; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void dfs(int num, int cnt)
{
    int i;
    if (cnt == M)
    {
        print();
        return;
    }
    for (i = num; i <= N; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(i + 1, cnt + 1);
            visited[i] = false;
        }
    }
}