#include <iostream>
using namespace std;

int main() {
int a,b;
cin >> a>>b;

if ( a>= b) {
	for (int i = a; i > b-1 ; ){
		cout << i << " ";
		i--;
	}
	
}

if ( b > a) {
	for (int i = b; i > a-1 ; ){
		cout << i << " ";
		i--;
	}
	
}

    return 0;
}