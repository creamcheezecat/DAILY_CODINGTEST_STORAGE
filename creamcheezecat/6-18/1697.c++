/*
https://www.acmicpc.net/problem/1697<br/>
숨바꼭질<br/>
1697
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

#include <queue>

using namespace std;
#define MAXPOS 100001
int main() 
{
    int N,K;
    cin >> N >> K ;
    bool visited[MAXPOS];

    queue<pair<int, int>> q;
    q.push({N,0});
    visited[N] = true;

    int sol = 0;

    while(!q.empty()){
        int curPos = q.front().first; // 현재 위치
        int move = q.front().second;

        if(curPos == K){
            sol = move;
            break;
        }

        // 현재 위치에서 이동할 수 있는 경우의 수 확인
        if (curPos - 1 >= 0 && !visited[curPos - 1]) {
            q.push({ curPos - 1, move + 1 }); // 이동 가능한 위치와 이동 횟수를 큐에 삽입
            visited[curPos - 1] = true; // 방문 처리
        }
        if (curPos + 1 <= MAXPOS && !visited[curPos + 1]) {
            q.push({ curPos + 1, move + 1 });
            visited[curPos + 1] = true;
        }
        if (curPos * 2 <= MAXPOS && !visited[curPos * 2]) {
            q.push({ curPos * 2, move + 1 });
            visited[curPos * 2] = true;
        }
        q.pop();
    }

    cout << sol << endl;
    
}

/* int sol = 0;
    while(N != K){
        sol++;
        if(N < K){
            if(N*2 < K){
                N *= 2;
            }else{
                N++;
            }
        }else{
            if()
        }
    } */