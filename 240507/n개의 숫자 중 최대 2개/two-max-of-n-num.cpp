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
    int cnt {0};
	int max2_val{0};
		for (int i = 0; i < n; i++) {
		if (max_val == arr[i]) {
			cnt++;
		}
	}
	if( cnt >=2) {
		max2_val = max_val;
	}
	else {

    if(max_val !=arr[0]){
    max2_val =arr[0];
	}
	else {
		 max2_val = arr[1];
	}
    for (int i = 0; i < n; i++) {
		if (max_val>arr[i]&&max2_val<=arr[i]) {
			max2_val=arr[i];
		}
	}
	}
	cout << max_val << " "<< max2_val;
	return 0;
}