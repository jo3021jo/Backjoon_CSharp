#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A;
	bool arr[42] = { false };
	int count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> A;
		arr[A % 42] = true;
	}

	for (int i = 0; i < 42; i++) {
		if (arr[i] == true) {
			count++;
		}
	}
	cout << count << "\n";
}