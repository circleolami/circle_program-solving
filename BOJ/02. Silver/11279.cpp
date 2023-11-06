/*
Problem URL: https://www.acmicpc.net/problem/11279
Problem Name: 최대 힙
Author: circleolami
Date: 2023.11.06
Version: 1.0
Algorithm: priority queue
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<int> result;
    int N, x;

    cin >> N;

    priority_queue<int> maxHeap;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x != 0)
            maxHeap.push(x);
        else
        {
            if (maxHeap.empty())
            {
                result.push_back(0);
            }
            else
            {
                result.push_back(maxHeap.top());
                maxHeap.pop();
            }
        }
    }

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << "\n";

    return 0;
}