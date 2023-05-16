/*
https://www.acmicpc.net/problem/2156
포도주 시식
2156
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

    vector<int> grape(n+1);
    vector<int> dp(n+1);

    for(int i = 1 ; i <= n ; i++){
        cin >> grape[i];
    }
    
    dp[0] = 0;
    dp[1] = grape[1];

    if(n > 1){
        dp[2] = grape[1] + grape[2];
    }

    for(int i = 3 ; i <= n ; i++){
        dp[i] = max(dp[i-1], max(dp[i-2]+grape[i], dp[i-3]+grape[i-1]+grape[i]));
    }
    cout << dp[n] << endl;

}