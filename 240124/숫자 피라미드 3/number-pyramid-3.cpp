#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
int cnt =1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i + 1; j++) {
			cout << i*j << " ";
           
		}
		cout << endl;
	}

	return 0;

}