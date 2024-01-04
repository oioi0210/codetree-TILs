#include <iostream>
using namespace std;

int main() {

	int a,n;
	cin >> a>> n;
	for (int i = 1; i <= n; i++) {
		cout << a+(i*n) << endl;
	}

	return 0;

}