#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

	int arr[100];
    for (int i =0; i < n; i++) {
        cin >> arr[i];
    }

	int max_val = arr[0];
	for (int i = 0; i < n; i++) {
		if (max_val < arr[i]) {
			max_val = arr[i];
		}
	}
    int max2_val = arr[0];
    for (int i = 0; i < n; i++) {
		if (max_val>arr[i]&&max2_val<arr[i]) {
			max2_val=arr[i];
		}
	}

	cout << max_val << " "<< max2_val;
	return 0;
}