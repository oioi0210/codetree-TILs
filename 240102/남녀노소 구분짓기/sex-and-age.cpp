#include <iostream>
using namespace std;

int main() {

	int a,b;
	cin >> a;
    cin >> b;

	if (a  == 0) {
		if (b >= 19) {
			cout << "MAN" << endl;
		}
		else {
			cout << "BOY" << endl;
		}
	}
	else {
		if (b >= 19) {
			cout << "WOMAN" << endl;
		}
		else {
			cout << "GIRL" << endl;
		}
	}

	return 0;

}