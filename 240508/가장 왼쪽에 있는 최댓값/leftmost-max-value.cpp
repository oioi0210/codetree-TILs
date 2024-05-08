#include <iostream>
using namespace std;

int main() {
	int n;
	
	cin >> n;

	int arr[100];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max{ 0 };
	
	int cnt = n;
	int sun{ 0 };
	while (true) {
		
		for (int i = 0; i < cnt; i++) {
			if (max < arr[i]) {
				max = arr[i];
				sun = i;
			}
		}
		cnt = sun + 1;
		
		cout << cnt  << " ";
		
		max = 0;
		if (cnt ==1) {
            break;
        }
            cnt--;
	}
	
	return 0;
}