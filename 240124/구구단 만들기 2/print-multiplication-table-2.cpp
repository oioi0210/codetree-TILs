#include <iostream>
using namespace std;

int main() {
int a,b;
cin >>a >> b;

	for (int i = 1; i <= b; i++) {
		for (int j = b; j >= a; j--) {
			cout << j << " * " << a*i << " = " << j*a*i << " ";
			if (j > a) cout << "/ ";
		}
		cout << endl;
	}

	return 0;

}