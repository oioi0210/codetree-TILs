#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int arr[10];
   
    // 10개의 정수를 배열에 입력받아 저장합니다.
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
   if (arr[i]%3==0) {
    cout << arr[i-1];
    break;
   }
 
    }

 

    return 0;
}