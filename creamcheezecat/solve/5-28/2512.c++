/*
https://www.acmicpc.net/problem/2512<br/>
예산<br/>
2512
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

    vector<long long> money(N,0);

    for (int i = 0; i < N ; i++){
        cin >> money[i];
    }

    long long M;
    cin >> M;

    sort(money.begin(), money.end());

    long long left = 1, right = money[N-1];
    long long answer = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 0;

        for (int i = 0; i < N; i++) {
            cnt += min(money[i],mid);
        }

        if (cnt <= M) {
            answer = max(answer, mid);
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer << endl;

}