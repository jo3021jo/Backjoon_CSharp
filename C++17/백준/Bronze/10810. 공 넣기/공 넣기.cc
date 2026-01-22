#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;
	int* arr = new int[N]();

	for (int l = 0; l < M; l++) {
		int i, j, k;
		cin >> i >> j >> k;
		for (int x = i-1; x <= j-1; x++) {
			arr[x] = k;
		}
	}
	
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	delete[] arr;
}