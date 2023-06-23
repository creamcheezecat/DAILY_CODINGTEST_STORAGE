/*
https://www.acmicpc.net/problem/9657<br/>
돌 게임3<br/>
9657
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;


int main() {
    int N;
    cin >> N;

    vector<int> dp(N + 1, 0);
    dp[1] = dp[3] = dp[4] = 1;

    for (int i = 5; i <= N; i++) {
        if (dp[i - 1] == 0 || dp[i - 3] == 0 || dp[i - 4] == 0)
            dp[i] = 1;
    }

    if (dp[N] == 0)
        cout << "CY" << endl;
    else
        cout << "SK" << endl;

    return 0;
}