#include<iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, V;
	int arr[100];
	int c = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> V;

	for (int i = 0; i < N; i++) {
		if (arr[i] == V) {
			c++;
		}
	}

	cout << c << "\n";
}