/* circleolami (230627)
2042 구간 합
https://www.acmicpc.net/problem/2042

알고리즘 분류
- 자료 구조
- 세그먼트 트리
*/

#include <iostream>
#include <vector>
#include <math.h>

#define MAX_SIZE 1000000
using namespace std;

int n, m, k;	// 수의 개수(n), 변경이 일어나는 횟수(m), 구간의 합을 구하는 횟수(k)
long long arr[MAX_SIZE];	// 수를 담을 배열 

long long init_tree(vector<long long>& tree, int node, int start, int end);	// 초기화 함수
long long sum(vector<long long>& tree, int node, int start, int end, int b, int c);	// 구간 합 함수
void update(vector<long long>& tree, int node, int start, int end, int x_node, long long x);	// 업데이트 함수


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int depth;	// 트리의 깊이 

	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	depth = ceil(log2(n));
	vector<long long> tree(pow(2,depth+1));	// 세그먼트 트리
	init_tree(tree, 1, 0, n - 1);

	long long a, b, c, temp;	// 세 개의 정수 + 임시변수
	for (int i = n + 2; i <= n + m + k + 1; i++) {
		cin >> a >> b >> c;
		if (a == 1) {
			temp = c - arr[b - 1];
			arr[b - 1] = c;
			update(tree, 1, 0, n - 1, b - 1, temp);
		}
		else if (a == 2)
			cout << sum(tree, 1, 0, n - 1, b - 1, c - 1) << '\n';
	}

	return 0;
}

long long init_tree(vector<long long>& tree, int node, int start, int end) {
	int mid = (start + end) / 2;

	if (start == end)
		return tree[node] = arr[start];
	return tree[node] = init_tree(tree, node*2, start, mid) + init_tree(tree, node*2+1, mid + 1, end);
}

long long sum(vector<long long>& tree, int node, int start, int end, int b, int c) {
	int mid = (start + end) / 2;

	if (b > end || c < start)	return 0;
	if (b <= start && c >= end)	return tree[node];
	return sum(tree, node*2, start, mid, b, c) + sum(tree, node*2+1, mid + 1, end, b, c);
}

void update(vector<long long>& tree, int node, int start, int end, int x_node, long long x) {
	int mid = (start + end) / 2;

	if (x_node<start || x_node>end) return;
	tree[node] = tree[node] + x;
	
	if (start != end) {
		update(tree, node * 2, start, mid, x_node, x);
		update(tree, node * 2 + 1, mid + 1, end, x_node, x);
	}
}