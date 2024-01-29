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
        sum+=arr[i];
        if(arr[i] == 0)
            break;
        cnt++;
    }

 cout << sum << " ";
double avg = (double) sum/cnt;
 cout<<fixed;
    cout.precision(1);
    cout << avg;
    return 0;
}