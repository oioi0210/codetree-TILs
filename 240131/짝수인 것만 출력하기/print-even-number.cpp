#include <iostream>

using namespace std;

int main() {
    // 처음 두 수 입력
    int n;
    cin >> n;

    // 배열 선언
    int arr[n] ;

    
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i]; 
    // 10개의 정수를 출력
    if (arr[i]%2==0) {
        cout << arr[i] << " ";
    }
    }
    return 0;
}