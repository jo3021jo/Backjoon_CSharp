#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, i, j;

	cin >> N >> M;

	int* arr = new int[N+1];
	
	for (int k = 1; k <= N; k++) {
		arr[k] = k;	
	}

	for (int k = 1; k <= M; k++) {
		cin >> i >> j;
		while (i < j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}

	for (int k = 1; k <= N; k++) {
		cout << arr[k] << " ";
	}

	delete[] arr;
}