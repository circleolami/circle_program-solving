/*
Problem URL: https://www.acmicpc.net/problem/12789
Problem Name: 도키도키 간식드리미
Author: circleolami
Date: 2023.12.27
Version: 1.0
Algorithm: stack
*/

#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int N;
    queue<int> students;
    stack<int> waiting;
    vector<int> vec;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        students.push(x);
    }

    int cnt = 1;
    while (!students.empty())
    {
        if (students.front() == cnt)
        {
            vec.push_back(students.front());
            students.pop();
            cnt++;
        }
        else if (!waiting.empty() && waiting.top() == cnt)
        {
            vec.push_back(waiting.top());
            waiting.pop();
            cnt++;
        }
        else
        {
            waiting.push(students.front());
            students.pop();
        }
    }

    while (!waiting.empty())
    {
        vec.push_back(waiting.top());
        waiting.pop();
    }

    bool check = true;
    for (int i = 0; i < vec.size() - 1; i++)
        if (vec[i] > vec[i + 1])
            check = false;

    if (check)
        cout << "Nice" << endl;
    else
        cout << "Sad" << endl;

    return 0;
}