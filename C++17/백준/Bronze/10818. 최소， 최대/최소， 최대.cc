#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < N; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	cout << min << " " << max << "\n";

	delete[] arr;
}