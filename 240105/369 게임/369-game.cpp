#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
	
	
    
    // 출력
	for(int i=1; i <= n; i++) {
	if ((i%10 ==3) || (i%10 ==6)) {
		cout << 0 << " ";
	}
	else if (( i %10 == 9) ||(i%3 == 0)) {
		cout << 0 << " ";

	}
	else if ( i >=30 && i<40 ) {
		cout << 0 << " ";

	}
	else if ( i >=60 && i<70 ) {
		cout << 0 << " ";

	}
	else if ( i >=90 && i<100 ) {
		cout << 0 << " ";

	}
	else {
		cout << i << " ";

	}

	}
    return 0;
}