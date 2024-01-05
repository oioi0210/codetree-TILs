#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;
    
    int cnt= 0;
    
    // 각 날짜마다 확인합니다.
    for(int i = 1; i <= n; i++) {
        // 주기가 가장 긴 12일부터 확인합니다.
        if( i %4 == 0 && i % 100 == 0 && i/400 ==1){
          
        }
         if(i<=100 && i %4 == 0 && i % 100 == 0){
          
        }
          
        // 12일 주기에 들어오지 않는다면, 3일 주기에 들어오는지 확인합니다.
        else if(i % 4 == 0){

        
             cnt++;
        // 3일 주기에도 들어오지 않는다면, 2일 주기에 들어오는지 확인합니다.
    }
    }
    
    cout <<cnt;
    return 0;
}