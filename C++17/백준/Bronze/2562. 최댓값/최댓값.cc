#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int mx = arr[0];
	int index = 1;

	for (int i = 0; i < 9; i++) {
		if (arr[i] > mx) {
			mx = arr[i];
			index = i + 1;
		}
	}
	cout << mx << "\n" << index << "\n";
}