#include <iostream>
using namespace std;

int main() {



	double arr[8];
	double sum_val = 0;

	for (int i = 0; i < 8; i++) {
		cin >>arr[i];
		sum_val += arr[i];
	}
    
double avg = (double) sum_val/8;
 cout<<fixed;
    cout.precision(1);
	cout << avg << endl;

 

	return 0;

}