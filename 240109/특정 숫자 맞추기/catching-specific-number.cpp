#include <iostream>
using namespace std;

int main() {

	int n;
	int sum_val = 0;

	while (true) {
		cin >> n;
		
		if (n == 25) {
			
			break;
		}
		else if ( n<= 25) {
		cout << "Higher" << endl;
		}
		else {
			cout << "Lower" << endl;
		}
		
	}
	cout  << "Good" << endl;

	return 0;

}