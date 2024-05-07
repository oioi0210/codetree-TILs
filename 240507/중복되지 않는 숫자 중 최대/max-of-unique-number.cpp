#include <iostream>
using namespace std;

// 인덱스 값이 true면 이미 등장한 수임
int isDuplicated[1001];

int main() {
	int n;
	cin >> n;

	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max{ -1 };

	for (int i = 0; i < n; i++) {
		int curNumber = arr[i];
			isDuplicated[curNumber]++;
	}
	
	for (int i = 0; i < n; i++) {
		if (max < arr[i] && isDuplicated[arr[i]] == 1) {
			max = arr[i];
		}
	}
	
	cout << max;
	
	return 0;
}