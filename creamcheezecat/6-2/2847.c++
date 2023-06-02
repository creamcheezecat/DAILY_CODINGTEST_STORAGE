/*
https://www.acmicpc.net/problem/2847<br/>
게임을 만든 동준이<br/>
2847
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<int> level(N,0);

    int sol = 0;
    int num = 0;
    for(int i = 0; i < N ; i++){
        cin >> level[i];
        num = i;
        while(1){
            if( num < 1){
                break;
            }else if(level[num] > level[num-1]){
                num--;
            }
            else{
                level[num-1]--;
                sol++;
            }
        }
    }

    cout << sol << endl;
}