#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
int cnt=1;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			for (int j = 0; j < n; j++) {
				cout << cnt<< " ";
				cnt++;
			}
		}
		else {
			for (int s = 1; s <= n; s++) {
				cout << cnt-2*s+n+1 << " ";
				cnt++;
			}
		}
		cout << endl;
	}

	return 0;

}