/* 
https://www.acmicpc.net/problem/16401
과자 나눠주기
16401 
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main() {
    int M,N;
    cin >> M >> N;

    vector<int> snack(N);

    for(int i = 0 ; i < N ; i++){
        cin >> snack[i];

    }

    sort(snack.begin(),snack.end());

    int left = 1, right = snack[N-1];
    int ans = 0;


    while (left <= right) { // 이분 탐색
        int mid = (left + right) / 2;
        int cnt = 0; // 과자 개수
        for (int i = 0; i < N; i++) {
            cnt += snack[i] / mid; // 과자 길이를 나눈 몫을 더함
        }
        if (cnt >= M) { // 과자 개수가 M보다 크거나 같은 경우
            ans = mid; // 현재 길이를 저장
            left = mid + 1; // 더 긴 길이를 찾기 위해 범위를 오른쪽으로 이동
        }
        else { // 과자 개수가 M보다 작은 경우
            right = mid - 1; // 범위를 왼쪽으로 이동
        }
    } 

    cout << ans << endl; // 최대 가능한 길이 출력
    return 0;
    
    // 시간초과
    /* while (left <= right) {
        int mid = (left + right) / 2;
        int cnt = 0;
        if (mid == 0) { // mid가 0인 경우 cnt를 0으로 설정
            cnt = 0;
        }
        else {
            for (int i = 0; i < N; i++) {
                cnt += snack[i] / mid;
            }

            if (cnt >= M) {
                ans = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }        
    }
    cout << ans << endl;
    return 0; */

    //divisionbyzero 런타임 에러
    /* while (left <= right) { // 이분 탐색
        int mid = (left + right) / 2;
        int cnt = 0; // 과자 개수
        for (int i = 0; i < N; i++) {
            cnt += snack[i] / mid; // 과자 길이를 나눈 몫을 더함
        }
        if (cnt >= M) { // 과자 개수가 M보다 크거나 같은 경우
            ans = mid; // 현재 길이를 저장
            left = mid + 1; // 더 긴 길이를 찾기 위해 범위를 오른쪽으로 이동
        }
        else { // 과자 개수가 M보다 작은 경우
            right = mid - 1; // 범위를 왼쪽으로 이동
        }
    } 

    cout << ans << endl; // 최대 가능한 길이 출력
    return 0;
    */

    /* 문제 풀이 처음 접근할 때 
    if(M <= N){
        cout << snack[N-M]<< endl;
    }else{
        for(int j = 0; j < snack.size()-1 ; j++){
            if( snack[j] < snack[N]/(M-(N-1))){
                cout << snack[N] << endl;
                return 0;
            }
        }
        cout << snack[N]/(M-(N-1)) << endl;
        
    } */
}
