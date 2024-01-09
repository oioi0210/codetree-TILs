#include <iostream>
using namespace std;
int main() {
    int a,b;
    char c;
    
	while (true) {
		cin >> a>>b>>c;

		
		if (c == 'C') {
			cout << a*b<< endl;
			break;
		}
		else {
			cout << a*b << endl;
		}
		
	}
	
	return 0;

}