/*
Problem URL: https://www.acmicpc.net/problem/1991
Problem Name: 트리 순회
Author: circleolami
Date: 2023.10.10
Version: 1.0
Algorithm: tree
*/

#include <iostream>
#include <vector>

using namespace std;

void preorder(char c);
void inorder(char c);
void postorder(char c);
pair<char, char> tree[26];

int main()
{
    int n;
    char parent, left, right;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> parent >> left >> right;
        tree[parent - 'A'].first = left;
        tree[parent - 'A'].second = right;
    }

    preorder('A');
    cout << endl;
    inorder('A');
    cout << endl;
    postorder('A');
    cout << endl;

    return 0;
}

void preorder(char c)
{
    if (c == '.')
        return;

    cout << c;
    preorder(tree[c - 'A'].first);
    preorder(tree[c - 'A'].second);
}

void inorder(char c)
{
    if (c == '.')
        return;

    inorder(tree[c - 'A'].first);
    cout << c;
    inorder(tree[c - 'A'].second);
}

void postorder(char c)
{
    if (c == '.')
        return;

    postorder(tree[c - 'A'].first);
    postorder(tree[c - 'A'].second);
    cout << c;
}