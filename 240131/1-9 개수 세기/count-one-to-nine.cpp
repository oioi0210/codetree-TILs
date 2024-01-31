#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

	int arr[n];
	int count_arr[9] = {};

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	
	for (int i = 1; i < 10; i++) {
		count_arr[arr[i]]++;
	}

	// 개수 출력
	for (int i = 1; i < 10; i++) {
		cout << count_arr[i]  << endl;
	}

	return 0;

}