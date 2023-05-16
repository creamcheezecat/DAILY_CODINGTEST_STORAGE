/*
https://www.acmicpc.net/problem/1018
체스판 다시 칠하기
1018
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main() {
    string wb[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
    };
    string bb[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
    };

    int M,N;
    cin >> M >> N;

    vector<string>board(M);

    for(int i = 0 ; i < M ;i++){
        cin >> board[i];
    }
    /* cout << endl;
    for(int i = 0 ; i < M ;i++){
        cout << board[i][0]<<endl;
        
    } */
    int mix_count = 10000;
    for(int y = 0; y <= M-8; y++){
        for(int x = 0; x<= N-8; x++){
            int wcount = 0;
            int bcount = 0;
            for(int i = 0 ; i< 8; i++){
                for(int j = 0 ; j < 8 ; j++){
                    if(board[i+y][j+x] != wb[i][j]){
                        wcount += 1;
                    }

                    if(board[i+y][j+x] != bb[i][j]){
                        bcount += 1;
                    }
                }
            }
            mix_count = mix_count < wcount ? mix_count : wcount ;
            mix_count = mix_count < bcount ? mix_count : bcount ;
        }
    }

    cout << mix_count << endl;
    
    return 0;
}
