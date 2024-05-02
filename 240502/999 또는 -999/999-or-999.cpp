#include <iostream>
using namespace std;

int main() {
    
int n{0};
	int arr[100];
    for (int i =0; i < 100; i++) {
        cin >> arr[i];
        n++;
        if(arr[i]==999||arr[i]==-999) {
            break;
        }
    }

	int min_val = arr[0];
	for (int i = 0; i < n-1; i++) {
		if (min_val > arr[i]) {
			min_val = arr[i];
		}
	}
   int max_val = arr[0];
	for (int i = 0; i < n-1; i++) {
		if (max_val < arr[i]) {
			max_val = arr[i];
		}
	}

	cout << max_val << " "<< min_val;
	return 0;
}