#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[10];
	int min{ 100 };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] - arr[j] < min && arr[i] - arr[j] >0) {
				min = arr[i] - arr[j];
			}
		}
	}
	cout << min;




}