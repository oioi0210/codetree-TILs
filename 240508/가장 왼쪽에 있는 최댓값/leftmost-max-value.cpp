#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // 원소의 수

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i]; // 원소 입력
    }

    int maxPos = 0; // 최댓값의 위치
    for (int i = 1; i < N; ++i) {
        if (arr[i] >arr[maxPos]) {
            maxPos = i;
        }
    }

    cout << maxPos + 1 << " "; // 최댓값의 위치 출력

    while (maxPos > 0) {
        int newMaxPos = 0;
        for (int i = 1; i < maxPos; ++i) {
            if (arr[i] > arr[newMaxPos]) {
                newMaxPos = i;
            }
        }
        cout << newMaxPos + 1 << " "; // 더 왼쪽 최댓값의 위치 출력
        maxPos = newMaxPos;
    }

    return 0;
}