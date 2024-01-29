#include <iostream>
using namespace std;

int main() {

	int arr[9];

	int sum_val = 0;
	int tri=0;
	int cnt =0;
	for (int i = 0; i < 10; i += 2) {
		if (arr[i]>1&&arr[i]%2==0){
			sum_val+=arr[i];
		}
		if (arr[i]>1&& arr[i]%3==0) {
			cnt++;
tri+=arr[i];

		}
	}
	double avg=tri/cnt;
	cout << fixed;
	cout.precision(1);


	cout << sum_val<< " "<< avg;
	return 0;

}