#include <iostream>

using namespace std;

int main() {
    // 입력받은 정수를 배열의 두번째 인덱스에 저장
	int n,m;
	cin >> n>>m;
	int arr[10] = {n, m};
	
cout << arr[0] << " " << arr[1] << " ";

    for(int i = 2; i < 10; i++) {
    arr[i] = arr[i - 1] +2* arr[i - 2];
        cout << arr[i] << " ";
    }

    return 0;
}