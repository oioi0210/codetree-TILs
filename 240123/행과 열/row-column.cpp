#include <iostream>
using namespace std;

int main() {
int n,t;
cin >> n>>t;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= t; j++) {
			cout << i * j<< " ";
		}
		cout << endl;
	}

	return 0;

}