#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	vector<int> arr(N);

	for (int b = 1; b <= M; b++) {
		int i, j, k;
		cin >> i >> j >> k;
		for (int c = i; c <= j; c++) {
			arr[c-1] = k;
		}
	}

	for (int b = 0; b < N; b++) {
		cout << arr[b] << " ";
	}
}