#include <iostream>
using namespace std;

int main() {

	
	int cnt = 0;

	for (int i = 1; i < 11; i++) {
        int n;
        cin >> n;
		if ((i % 3 == 0) || (i%5==0)) {
			cnt++;
		}
     
	}

	cout << cnt << " " << cnt ;
	return 0;

}