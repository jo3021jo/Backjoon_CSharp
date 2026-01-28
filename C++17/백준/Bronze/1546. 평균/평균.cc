#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	double* arr = new double[N];
	double M = 0.0;
	double sum = 0.0;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		M = max(M, arr[i]);
	}

	for (int i = 0; i < N; i++) {
		sum += arr[i] / M * 100;
	}

	cout << sum / N << "\n";
}
