#include <iostream>
using namespace std;

int main() {

	int n;
    int cnt =0;
	while (true) {
		cin >> n;
		if (n%2 == 0) {
			n = n / 2;
            cnt++;
		}
		else if (n%2 ==1) { 
            (n*3) +1;
			cnt++;
		}
        else if (n==1) {
            break;
        }
        
	}
	cout << cnt;

	return 0;

}