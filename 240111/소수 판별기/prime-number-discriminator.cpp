#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	bool satisfied = true;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			satisfied = false;
		}
	}
	if (satisfied == true) {
		cout << "N";
	}
	else {
		cout << "P";
	}

	return 0;

}