/*
https://www.acmicpc.net/problem/2302<br/>
극장 좌석<br/>
2302
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
    int N, M;
    cin >> N >> M;

    vector<int> dp(N+1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2 ; i < N+1; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    long long sol = 1;
    int prev = 0;
    int m;
    for (int i = 0; i < M; i++){
        cin >> m;

        sol *= dp[m-prev-1];
        prev = m;
    }

    sol *= dp[N-prev];

    cout << sol << endl;

    return 0;
}