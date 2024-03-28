#include <iostream>
using namespace std;

int main() {
	//배열 선언
	int count_arr[11] = {};
	int arr[101];
	
	// arr[i]를 입력받은 후 카운팅 배열을 통해 십의 자리수 각각의 빈도 저장, 0이 나오면 for문에서 빠져나오기
	for(int i = 0; i < 100; i++) {
		cin >> arr[i];
		if(arr[i] == 0)
			break;
		if(arr[i] < 11)
			continue;
		count_arr[arr[i] / 10]++;
	}
	
    // 1부터 9까지 나온 횟수를 출력
    for(int i = 10; i > 0; i--) {
        cout << i <<0<< " - " << count_arr[i] << endl;
    }

    return 0;
}