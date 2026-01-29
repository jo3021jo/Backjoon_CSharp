#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	int mx, mn;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	mx = arr[0];
	mn = arr[0];

	for (int x : arr) {
		if (x > mx) mx = x;
		if (x < mn) mn = x;
	}
	cout << mn << " " << mx << "\n";
}