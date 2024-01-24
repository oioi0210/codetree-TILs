#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
int cnt =n;
	for (int i = 0; i < n; i++) {
        for(int s =0; s < i; s++){
       cout << "  ";
        }
		for (int j = n-i; j >0 ; j--) {
          
			cout << j << " ";
          
		}
		cout << endl;
	}

	return 0;

}