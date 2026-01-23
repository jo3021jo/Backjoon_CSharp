#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, i, j, num;
	cin >> N >> M;

	int* arr = new int[N];

	for (int k = 1; k <= N; k++) {
		arr[k-1] = k;
	}

	for (int b = 0; b < M; b++) {
		cin >> i >> j;
		num = arr[i-1];
		arr[i-1] = arr[j-1];
		arr[j-1] = num;
	}

	for (int c = 0; c < N; c++) {
		cout << arr[c] << " ";
	}
}