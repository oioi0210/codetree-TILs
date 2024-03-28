#include <iostream>
using namespace std;

int main() {
int n=0;
cin >> n;
	int count_arr[10] = {};
	int arr[100];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		count_arr[arr[i]]++;
	}

	// 개수 세기
	for (int i = 1; i <=9; i++) {
		cout << count_arr[arr[i]] << endl;
	}

	return 0;

}