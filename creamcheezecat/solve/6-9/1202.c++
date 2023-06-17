/*
https://www.acmicpc.net/problem/1202<br/>
보석 도둑<br/>
1202
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <queue>
using namespace std;

struct Jewel {
    long long m; // 무게
    long long v; // 가격
};

struct CompareJewel {
    bool operator()(const Jewel& jewel1, const Jewel& jewel2) {
        return jewel1.m < jewel2.m;
    }
};

int main() {
    long long N, K;
    cin >> N >> K;

    vector<Jewel> jewel(N);
    vector<long long> backpack(K);
    long long x, y;

    for (long long i = 0; i < N; i++) {
        cin >> x >> y;
        jewel[i].m = x;
        jewel[i].v = y;
    }

    for (long long i = 0; i < K; i++) {
        cin >> backpack[i];
    }

    long long sol = 0;

    sort(jewel.begin(), jewel.end(), CompareJewel());
    sort(backpack.begin(), backpack.end());

    priority_queue<long long> pq;
    int idx = 0;

    for (long long i = 0; i < K; i++) {
        while (idx < N && jewel[idx].m <= backpack[i]) {
            pq.push(jewel[idx].v);
            idx++;
        }

        if (!pq.empty()) {
            sol += pq.top();
            pq.pop();
        }
    }

    cout << sol << endl;
    return 0;
}