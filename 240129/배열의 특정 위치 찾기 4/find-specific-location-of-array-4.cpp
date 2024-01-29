#include <iostream>

using namespace std;

int main() {
    // 정수 배열 선언
    int arr[10];
    int cnt = 0; 
    int sum =0;
    // 10개의 정수를 배열에 입력받으며 0이 있는지 확인합니다.
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i]>1&& arr[i]%2==0){
        sum+=arr[i];
cnt++;
        }

        if(arr[i] == 0)
            break;
    }

 cout << cnt <<" " << sum << " ";

    return 0;
}