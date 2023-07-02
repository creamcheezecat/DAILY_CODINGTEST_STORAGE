/*
https://www.acmicpc.net/problem/12100<br/>
2048(Easy)<br/>
12100
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

void dfs()

int main() 
{
    int N;
    cin >> N;
    vector<vector<int>> num(N,vector<int>(N,0));
    
    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < N ; j++){
            cin >> num[i][j];
        }
    }

    while(5--){
        vector<vector<bool>> vistied(N,vector<bool>(N,false));
        for (int i = 0 ; i < N ; i++){
            for (int j = 0 ; j < N ; j++){
                if(!vistied[i][j])
                
            }
        }
    }

    int sol = 0;
    for (int i = 0; i < N ; i++){
        for(int j = 0; j < N ; j){
            if(sol<num[i][j]){
                sol = num[i][j];
            }
        }
    }

    
}