#include <iostream>
using namespace std;

int main() {


	int arr[100];
int sum =0;
	
	for (int i = 0; i < 100; i++) {
		cin >> arr[i];
		if (arr[i]==0) {
			sum+=arr[i-1];
			sum+=arr[i-2];
			sum+=arr[i-3];
			break;
		}
	}

	cout << sum;
	return 0;

}