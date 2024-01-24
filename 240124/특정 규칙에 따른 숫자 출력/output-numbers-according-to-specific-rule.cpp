#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
int cnt =1;
	for (int i = 1; i <= n; i++) {
        for (int s = 1; s <i; s++)
        {
            cout << "  ";
        }
		for (int j = n; j >= i; j--) {
			cout << cnt << " ";
           cnt++;
           if (cnt > 9) {
            cnt =1;
           }
		}
		cout << endl;
	}

	return 0;

}