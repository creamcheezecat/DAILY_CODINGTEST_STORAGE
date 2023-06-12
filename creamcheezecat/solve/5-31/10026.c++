/*
https://www.acmicpc.net/problem/10026<br/>
적록색약<br/>
10026
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

void dfs(vector<vector<char>>& arr, vector<vector<bool>>& checker
            , int x, int y, char c, bool is_rg_blind) {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int nx, ny;
    checker[x][y] = true;
    for (int i = 0; i < 4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if (0 <= nx && nx < arr.size() &&
            0 <= ny && ny < arr[0].size() &&
            !checker[nx][ny] &&
            arr[nx][ny] == c) {
            if (is_rg_blind && (c == 'R' || c == 'G')) {
                arr[nx][ny] = 'G';
            }
            dfs(arr, checker, nx, ny, c, is_rg_blind);
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<vector<char>> drawing(N, vector<char>(N));
    vector<vector<bool>> check(N, vector<bool>(N, false));

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            cin >> drawing[j][i];
        }
    }

    int sum_color = 0;
    int sum_rgcolor = 0;
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            if (!check[j][i]) {
                dfs(drawing, check, j, i, drawing[j][i], true);
                if (drawing[j][i] == 'R') {
                    drawing[j][i] = 'G';
                }
                sum_color++;
            }
        }
    }

    check.assign(N, vector<bool>(N, false));  // check 배열 초기화

    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            if (!check[j][i]) {
                dfs(drawing, check, j, i, drawing[j][i], false);
                sum_rgcolor++;
            }
        }
    }

    cout << sum_color << " " << sum_rgcolor << endl;

    return 0;
}
