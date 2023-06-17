/*
https://www.acmicpc.net/problem/14889<br/>
스타트와 링크<br/>
14889
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <stdlib.h>
using namespace std;

int sol = 10000;

// 팀을 나누는 함수
void divideTeam(int idx, int cnt) {
    if (cnt == N / 2) {
        vector<int> teamA, teamB;
        for (int i = 0; i < N; i++) {
            if (team[i] == 1) {
                teamA.push_back(i);
            } else {
                teamB.push_back(i);
            }
        }

        int diff = 0;
        for (int x = 0; x < N / 2; x++) {
            for (int y = 0; y < N / 2; y++) {
                diff += status[teamA[x]][teamA[y]] - status[teamB[x]][teamB[y]];
            }
        }
        sol = min(sol, abs(diff));
        return;
    }

    for (int i = idx; i < N; i++) {
        team[i] = 1;
        divideTeam(i + 1, cnt + 1);
        team[i] = 0;
    }
}

int main() {
    cin >> N;

    status.resize(N, vector<int>(N, 0));
    team.resize(N, 0);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> status[i][j];
        }
    }

    divideTeam(0, 0);

    cout << sol << endl;

    return 0;
}