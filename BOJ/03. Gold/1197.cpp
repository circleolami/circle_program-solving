/*
Problem URL: https://www.acmicpc.net/problem/1197
Problem Name: 최소 스패닝 트리
Author: circleolami
Date: 2023.09.19
Version: 1.0
Algorithm: mst
*/
#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 10003

using namespace std;
int parent[MAX];
int find(int x);
void unionSet(int a, int b);
int checkSameSet(int a, int b);

int main()
{
    int V, E;
    long long result = 0;
    int a, b, c;
    vector<pair<int, pair<int, int>>> links;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E;
    for (int i = 0; i < E; i++)
    {
        cin >> a >> b >> c;
        links.push_back(make_pair(c, make_pair(a, b)));
    }
    sort(links.begin(), links.end());

    for (int i = 1; i <= V; i++)
        parent[i] = i;

    for (int i = 0; i < E; i++)
        if (!checkSameSet(links[i].second.first, links[i].second.second))
        {
            unionSet(links[i].second.first, links[i].second.second);
            result += links[i].first;
        }

    cout << result << endl;

    return 0;
}

int find(int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a != b)
        parent[b] = a;
}

int checkSameSet(int a, int b)
{
    if (find(a) == find(b))
        return 1;
    else
        return 0;
}
