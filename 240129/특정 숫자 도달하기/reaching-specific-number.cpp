#include <iostream>
using namespace std;

int main() {

	int arr[9] ;

	int sum_val = 0;
int per = 0;
	for (int i = 0; i < 10; i++) {
		 cin>>arr[i];
		if (arr[i] < 250) {
			sum_val += arr[i];
			per++;
		}
		else {
			break;
		}
	}
	   double aver=(double)sum_val/per;
    cout<<fixed;
    cout.precision(1);
	cout << sum_val<< " " << aver;

	return 0;

}