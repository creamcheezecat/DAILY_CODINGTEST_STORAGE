/*
https://www.acmicpc.net/problem/2531<br/>
회전초밥<br/>
2531
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() 
{
    int N,d,k,c;
    
    cin >> N >> d >> k >> c;

    vector<int> chibob(N , 0);
    for (int i = 0 ; i < N ; i++){
        cin >> chibob[i];
    }

    vector<int> eaten(d + 1); // 초밥 종류별 먹은 횟수를 저장하는 벡터
    int maxTypes = 0; // 최대로 먹을 수 있는 초밥의 종류 수
    int cnt = 0; // 현재 선택된 초밥의 종류 수

    // 처음부터 k개의 초밥을 선택하여 초기값으로 설정
    for (int i = 0; i < k; i++) {
        if (eaten[chibob[i]] == 0) { // 처음 먹는 종류의 초밥일 경우
            cnt++; // 종류 수 증가
        }
        eaten[chibob[i]]++; // 해당 종류의 초밥 먹은 횟수 증가
    }

    maxTypes = cnt; // 초기값 설정

    // 연속해서 k개의 초밥을 선택하며 경우의 수를 확인
    for (int i = k; i < N + k; i++) {
        if (eaten[chibob[i % N]] == 0) { // 처음 먹는 종류의 초밥일 경우
            cnt++; // 종류 수 증가
        }
        eaten[chibob[i % N]]++; // 해당 종류의 초밥 먹은 횟수 증가

        // 제일 왼쪽에 있는 초밥 제외
        eaten[chibob[i - k]]--;
        if (eaten[chibob[i - k]] == 0) { // 해당 종류의 초밥을 더 이상 먹지 않는 경우
            cnt--; // 종류 수 감소
        }

        // 쿠폰으로 먹을 수 있는 초밥을 이미 먹은 경우
        if (eaten[c] == 0) {
            maxTypes = max(maxTypes, cnt + 1); // 최대 종류 수 업데이트 (쿠폰 초밥 포함)
        } else {
            maxTypes = max(maxTypes, cnt); // 최대 종류 수 업데이트 (쿠폰 초밥 제외)
        }
    }

    cout << maxTypes << endl;

    return 0;

}