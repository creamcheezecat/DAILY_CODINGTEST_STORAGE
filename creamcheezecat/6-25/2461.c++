/*
https://www.acmicpc.net/problem/2461<br/>
대표 선수<br/>
2461
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <stack>
using namespace std;

int main() 
{
    int N, M;
    cin >> N>> M;
    vector<vector<long long>> h_class(N,vector<long long>(M,0));

    for(int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < M ; j++){
            cin >> h_class[i][j];
        }
    }


    /* for(int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < M ; j++){
            cout << h_class[i][j] << " ";
        }
        cout << endl;
    } */
}