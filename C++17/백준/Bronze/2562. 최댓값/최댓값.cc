#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A;
	int arr[9];
	int count = 0;
	int max = 0;

	for (int i = 0; i < 9; i++) {
		cin >> A;
		arr[i] = A;
	}
	
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	for (int i = 0; i < 9; i++) {
		if (max == arr[i]) {
			count = i+1;
		}
	}
	
	cout << max << "\n" << count << "\n";
}