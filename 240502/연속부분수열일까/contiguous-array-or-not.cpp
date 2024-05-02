#include <iostream>

using namespace std;

int main() { // 여기에 코드를 작성해주세요.
    int n1, n2;
    int arr1[100];
    int arr2[100];

    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int cnt{ 0 };

    for (int j = 0; j < n1; j++) {
        if (arr2[0] == arr1[j]) {
            for (int s = 0; s < n2; s++)
            {

                if (arr1[j] == arr2[s]) {
                    cnt++;
                    j++;
                }
                else {
                    
                }
            }
        }
    }
    if (cnt == n2) {
        cout << "Yes";
    }
    else  {
        cout << "No";
    }


    return 0;
}