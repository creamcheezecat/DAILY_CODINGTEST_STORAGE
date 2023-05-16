/*
https://www.acmicpc.net/problem/2231
분해합
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int ans = 0;
    for (int i = 1; i < n; i++) {
        int sum = i;  // i를 분해합으로 사용할 경우
        int num = i;  // i의 각 자리수를 더한 값을 구하기 위해 사용되는 변수
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum == n) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
