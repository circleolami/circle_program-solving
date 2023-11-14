/*
Problem URL: https://www.acmicpc.net/problem/1082
Problem Name: 방 번호
Author: circleolami
Date: 2023.11.14
Version: 1.0
Algorithm: greedy, dp
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_N 10
#define MAX_M 50

int n, m;
int price[MAX_N];
vector<int> dp[MAX_M + 1];

int compare(int x, vector<int> a, vector<int> b);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> price[i];
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < price[j])
                continue;

            vector<int> temp = dp[i - price[j]];
            sort(temp.begin(), temp.end());
            temp.push_back(j);
            if (compare(i, temp, dp[i]))
                dp[i] = temp;
        }
        if (compare(i, dp[i - 1], dp[i]))
            dp[i] = dp[i - 1];
    }

    if (dp[m].empty())
        dp[m].push_back(0);

    for (int i = dp[m].size() - 1; i >= 0; i--)
        cout << dp[m][i];

    return 0;
}

int compare(int x, vector<int> a, vector<int> b)
{
    if (x == m)
    {
        if (a.size() > 0 && a[a.size() - 1] == 0)
            return 0;
        if (b.size() > 0 && b[b.size() - 1] == 0)
            return 1;
    }

    if (a.size() > b.size())
        return 1;
    else if (a.size() < b.size())
        return 0;

    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] > b[i])
            return 1;
        else if (a[i] < b[i])
            return 0;
    }

    return 0;
}