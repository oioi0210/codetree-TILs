#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j =9+2*i ; j <=11+2*i+2*n-4; j+=2) {
			cout <<  j<< " ";
		}
		cout << endl;
	}

	return 0;

}