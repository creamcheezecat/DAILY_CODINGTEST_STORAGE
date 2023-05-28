/*
https://www.acmicpc.net/problem/1654<br/>
랜선 자르기<br/>
1654
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    vector<long long> lines(K);
    for (int i = 0; i < K; i++) {
        cin >> lines[i];
    }
    sort(lines.begin(), lines.end());

    long long left = 1, right = lines[K-1];
    long long answer = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 0;

        for (int i = 0; i < K; i++) {
            cnt += lines[i] / mid;
        }

        if (cnt >= N) {
            answer = max(answer, mid);
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer << endl;
    return 0;
}