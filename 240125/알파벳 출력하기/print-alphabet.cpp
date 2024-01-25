#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
    char x='A';
for (int i =1; i<=n; i++) {
for (int j =1; j<=i; j++ ){
    cout << (char) x ;
    x++;
    if (x >25) {
        char x='A';
    }
}
cout << endl;
}



	return 0;
}