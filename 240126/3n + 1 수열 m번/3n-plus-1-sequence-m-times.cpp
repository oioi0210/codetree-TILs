#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int m;
    cin >> m;
	
	// m회 반복합니다.
	for(int i = 0; i < m; i++) {
		// 변수 선언 및 입력
		int n;
		cin >> n;
		int ans = 0;
		
		// n이 1이 될 때까지 3n + 1을 반복합니다.
		while(n != 1) {
			if(n % 2 == 0)
				n /= 2;
			else
				n = n * 3 + 1;
			
			ans++;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}