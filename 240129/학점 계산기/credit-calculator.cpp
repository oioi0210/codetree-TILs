#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	double arr[n];
	double sum_val = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum_val += arr[i];
	}

double avg = (double) sum_val/n;
 cout<<fixed;
    cout.precision(1);
	cout << avg << endl;
	if (avg >=4)
{

	cout << "Perfect";
}
	
	else if (avg<4&& avg >=3) {
		cout << "Good";
	}
	else {
		cout << "Poor";
	}
	return 0;

}