/*
https://www.acmicpc.net/problem/8980<br/>
택배<br/>
8980
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

struct Delivery {
    int from;
    int to;
    int num;
};

bool compare(const Delivery& a, const Delivery& b) {
    if (a.to == b.to) {
        return a.from < b.from;
    }
    return a.to < b.to;
}

int main() {
    int N, C, M;
    cin >> N >> C >> M;

    vector<Delivery> deliveries(M);
    for (int i = 0; i < M; i++) {
        cin >> deliveries[i].from >> deliveries[i].to >> deliveries[i].num;
    }

    sort(deliveries.begin(), deliveries.end(), compare);

    vector<int> capacity(N + 1, C);
    int answer = 0;

    for (int i = 0; i < M; i++) {
        int from = deliveries[i].from;
        int to = deliveries[i].to;
        int num = deliveries[i].num;

        int minCapacity = C;
        for (int j = from; j < to; j++) {
            minCapacity = min(minCapacity, capacity[j]);
        }

        int unload = min(minCapacity, num);
        for (int j = from; j < to; j++) {
            capacity[j] -= unload;
        }

        answer += unload;
    }

    cout << answer << endl;

    return 0;
}