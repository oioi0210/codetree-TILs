#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max{ 0 };
	int cnt{ 0 };
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			cnt++;
		}
		else if (max == arr[i]) {
			cnt = 0;
			max = 0;
		}
	}
	if (cnt == 0) {
		cout << -1;
	}
	else {
		cout << max;
	}
	
	return 0;
}