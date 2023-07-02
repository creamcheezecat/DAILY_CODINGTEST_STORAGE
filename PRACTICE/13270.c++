/*
https://www.acmicpc.net/problem/13270
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <cstring>
using namespace std;
int dp[1000001];
void fibo(int n){
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
}

int main() {
    
    int p_min = 0, p_max = 0;
    int N;
    cin >> N; // 사람 수

    fibo(N);

    p_min = (N + 1) / 2;

    if(N % 3 == 0){
        p_max = N / 3 * 2;
    }else if(N % 3 == 2){
        p_max = N / 3 * 2 + 1;
    }else{
        p_max = N / 3 * 2 - 1;
    }

    if(p_min < p_max){
        cout << p_min << " " << p_max << endl;
    }else{
        cout << p_max << " " << p_min << endl;
    }
    
}

/*     int p_count = 2;
    while(N > 0){
        if(dp[p_count] > N){
            if((N - dp[p_count-1]) >= 2){
                N = N - dp[p_count-1];
                p_max += dp[p_count-2];
                p_count = 2;
            }else{
                N = N - dp[p_count-2];
                p_max += dp[p_count-3];
                p_count = 2;
            }
            
        }else if(dp[p_count] == N) {
            p_max += dp[p_count-1];
            break;
        }
        p_count++;
    }

    p_max = max(p_max,temp); */