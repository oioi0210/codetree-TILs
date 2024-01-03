#include <iostream>
using namespace std;

int main() {
int a;
cin >> a;

	for (int i = a; i < (5*a)+1; i += a) {
		cout << i << " ";
	}


	return 0;

}