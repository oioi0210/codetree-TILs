#include <iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	bool satisfied = false;
	for (int i = a; i <= b; i++) {
		if (1920%i != 0&& 2880%i !=0) {
			satisfied = true;
		}
	}
	if (satisfied == true) {
		cout << 0;
	}
	else {
		cout << 1;
	}

	return 0;

}