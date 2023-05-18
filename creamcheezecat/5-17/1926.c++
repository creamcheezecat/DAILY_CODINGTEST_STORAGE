/*
https://www.acmicpc.net/problem/1926
그림
1926
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int dfs(vector<vector<int>>& arr, vector<vector<bool>>& checker,int x ,int y){
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    int nx,ny;
    int size = 1;
    for(int i = 0; i < 4 ; i++ ){
        nx = x+dx[i];
        ny = y+dy[i];
        if (0<= nx && nx < arr.size() && 0<= ny  && ny < arr[0].size() && arr[nx][ny] == 1 && !checker[nx][ny]){
            checker[nx][ny] = true;
            size += dfs(arr,checker,nx,ny);
        }
    }
    return size;
}

int main() {
    int n, m; // n 은 세로 m 은 가로
    cin >> n >>  m;
    vector<vector<int>> paper(n, vector<int>(m));
    vector<vector<bool>> check(n, vector<bool>(m, false));

    for(int j = 0; j < n ; j++){
        for(int i = 0; i< m ; i++){
            cin >> paper[j][i];
        }
    }
    int papercount = 0;
    int maxpaper = 0;
    for(int j = 0; j < n ; j++){
        for(int i = 0; i< m ; i++){
            if(paper[j][i] == 1 && !check[j][i]){
                check[j][i] = true;
                maxpaper = max(maxpaper,dfs(paper,check,j,i));
                papercount++;
            } 
        }
    }

    cout << papercount << endl;
    cout << maxpaper <<endl;

    return 0;
}