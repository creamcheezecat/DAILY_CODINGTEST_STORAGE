/*
https://www.acmicpc.net/problem/11057<br/>
오르막 수<br/>
11057
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


    vector<long long> dp(N+1,0);

    dp[0] = 0;
    dp[1] = 10;
    for (int i = 2 ; i < N+1; i++){
        for (int j = 1; j < 10; j++ ){
            dp[i] += dp[i-1] - (dp[i-2]+j);
        }
    }

    cout << dp[N] << endl;

}