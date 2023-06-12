/*
https://www.acmicpc.net/problem/11652<br/>
카드<br/>
11652
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

    map<long long, int> card;
    long long x;
    for (int i = 0; i < N ; i++){
        cin >> x;
        if (card.count(x) != 0){
            card[x] += 1;
        }else{
            card[x] = 1;
        }
    }
    // 최댓값 찾기
    int maxValue = -1; 
    long long sol = 0;
    for (const auto& pair : card) {
        if (pair.second > maxValue) {
            sol = pair.first;
            maxValue = pair.second;
        }
    }

    cout << sol << endl;
    
}