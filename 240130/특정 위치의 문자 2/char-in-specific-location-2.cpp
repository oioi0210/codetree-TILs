#include <iostream>

using namespace std;

int main() {
    // 문자 배열 선언
    char arr[10];

    // 10개의 문자를 배열에 입력받아 저장합니다.
    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    // 1번째, 4번째, 7번째 인덱스에 저장된 값 들을 차례대로 출력
    cout << arr[1] << " " << arr[4] << " " << arr[7];

    return 0;
}