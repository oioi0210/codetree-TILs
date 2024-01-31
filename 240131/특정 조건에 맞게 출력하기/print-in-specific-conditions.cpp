#include <iostream>

using namespace std;

int main() {
    // 배열 선언
    int arr[100];
  

    for(int i = 0; i < 100; i++) {
          cin >> arr[i];
         if(arr[i]  == 0)
            break;
          else if  (arr[i]%2 ==0) {
cout << arr[i]/2 << " ";
        }
        else{
 cout << 3+arr[i] << " ";
        }
      
            
    }
	
    return 0;
}