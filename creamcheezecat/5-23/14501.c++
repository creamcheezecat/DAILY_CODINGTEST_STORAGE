/*
https://www.acmicpc.net/problem/14501<br/>
퇴사<br/>
14501
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
    int N;
    cin >> N;

    vector<int> days(N);
    vector<int> profit(N);

    vector<int> dp(N + 1);
    int maxprofit = 0;

    for (int i = 0; i < N ; i++){
        cin >> days[i] >> profit[i];
    }

    int daycount;

    for (int i = 0; i < N; i++) {
        if (i + days[i] <= N) {  // 현재 상담을 선택했을 때 퇴사 전이라면
            dp[i + days[i]] = max(dp[i + days[i]], dp[i] + profit[i]); // 현재 상담을 선택하면 상담 기간 이후의 최대 이익 갱신
            maxprofit = max(maxprofit, dp[i + days[i]]);// 최대 이익 갱신
        }
        dp[i + 1] = max(dp[i + 1], dp[i]);  // 현재 상담을 선택하지 않은 경우 이전까지의 최대 이익을 그대로 가져옴
    }


    cout << maxprofit << endl;

}