#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int n;

	// 입력
	cin >> n;
	
	for(int i=0; i <= n; i++) {
      int a;
      cin >>a;
	if (a%3==0 && a%2==1) {
		cout << a << endl;
	}
	else {
cout << a << endl;
	}
    }
	}

	
    return 0;
}