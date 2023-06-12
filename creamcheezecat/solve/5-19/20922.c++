/*
https://www.acmicpc.net/problem/20922
겹치는 건 싫어
20922
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    vector<int> proc(N);
    map<int,int> checking;
    int longcount = 0;
    int curcount = 0;
    int start = 0;

    for (int i = 0 ; i < N ; i++ ){
        cin >> proc[i];
        checking[proc[i]]++;

        while(checking[proc[i]] > K){
            checking[proc[start]]--;
            start++;
        }

        curcount = i - start +1;
        longcount = max(longcount, curcount);
    }

    
    /* for (int i = 0 ; i < N ; i++){
        checking[proc[i]] += 1;
        if (checking[proc[i]] > K) {
            curcount = i - start;
            checking[proc[i]] = 1;
            while (checking[proc[start]] < K) {
                checking[proc[start]]--;
                start++;
            }
            start++;
        }else{
            curcount += 1;
            longcount = max(longcount,curcount);
        }
    } */

    cout << longcount <<endl;
    return 0;
}