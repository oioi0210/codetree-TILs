#include <iostream>

using namespace std;

int main() {
    // 배열 선언
    int arr[10];
  

    for(int i = 0; i < 10; i++) {
          cin >> arr[i];
         if(arr[i]  == 0)
            break;
        else if (arr[i]%2 !=0) {
 cout << 3+arr[i] << " ";
        }
        else if  (arr[i]%2 ==0) {
cout << arr[i]/2 << " ";
        }
            
    }
	
    return 0;
}