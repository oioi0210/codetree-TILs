#include <iostream>
using namespace std;

int main() {


	char c;
	int n;
	cin >> c >> n;


  if (c == 'D') {
		for (int i == n; i <= 1;) {
			cout << i << " ";
			i--;
		}
	}

	if (c == 'A') {
		for (int i = 1; i <= n;) {
			cout << i << " ";
			i++;
		}
	}
	
	
	return 0;

}