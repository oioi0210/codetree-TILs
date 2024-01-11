#include <iostream>
using namespace std;

int main() {
int n;
cin >>n;
	for (int s=1; s <=2; s++) {
    for (int i = 1; i <=n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "*";
		}
		cout << endl;
	}
    cout << endl;
    }


	return 0;

}