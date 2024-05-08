#include <iostream>
using namespace std;

int main() {
   

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i]; // 원소 입력
    }
    int max1{ 0 };
    for (int i = 0; i < 10; ++i) {
        if (arr[i] < 500 && max1 < arr[i]) {
            max1 = arr[i];
       }
    }
    cout << max1 << " ";
    int max2{ 0 };
    for (int i = 0; i < 10; ++i) {
        if (arr[i] > 500 && max2 < arr[i]) {
            max2 = arr[i];
        }
    }
    cout << max2;
    return 0;
}