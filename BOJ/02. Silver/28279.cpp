/*
Problem URL: https://www.acmicpc.net/problem/28279
Problem Name: 덱 2
Author: circleolami
Date: 2023.12.27
Version: 1.0
Algorithm: deque
*/

#include <iostream>
#include <deque>
#define endl "\n"

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N, x, y;
    deque<int> dq;

    cin >> N;

    while (N--)
    {
        cin >> x;
        switch (x)
        {
        case 1:
            cin >> y;
            dq.push_front(y);
            break;
        case 2:
            cin >> y;
            dq.push_back(y);
            break;
        case 3:
            if (!dq.empty())
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else
            {
                cout << -1 << endl;
            }
            break;
        case 4:
            if (!dq.empty())
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
            else
            {
                cout << -1 << endl;
            }
            break;
        case 5:
            cout << dq.size() << endl;
            break;
        case 6:
            dq.empty() ? cout << 1 << endl : cout << 0 << endl;
            break;
        case 7:
            dq.empty() ? cout << -1 << endl : cout << dq.front() << endl;
            break;
        case 8:
            dq.empty() ? cout << -1 << endl : cout << dq.back() << endl;
            break;
        }
    }
}