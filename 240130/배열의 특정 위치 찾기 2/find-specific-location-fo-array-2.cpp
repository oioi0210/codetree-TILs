#include <iostream>

using namespace std;

int main() {
    // 문자 배열 선언
   int arr[10];
int sum1 = 0;
int sum2 = 0;
    // 10개의 문자를 배열에 입력받아 저장합니다.
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
     if ((i+2)%2==0) {
        sum1+=arr[i];
     }
      if ((i+3)%2==0) {
        sum2+=arr[i];
     }
  }
  if (sum2 >= sum1) {
    cout << sum2-sum1;
  }
  else {
   cout << sum1 - sum2;
  }

    return 0;
}