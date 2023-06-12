/*
https://www.acmicpc.net/problem/15903<br/>
카드 합체 놀이<br/>
15903
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <numeric>
using namespace std;

int main() 
{
    int n,m;
    cin >> n >> m;

    vector<long long> card(n,0);
    for (int i = 0; i < n ; i++){
        cin >> card[i];
    }

    long long sumsum;
    while(m--){
        sort(card.begin(),card.end());

        sumsum = card[0]+card[1];
        card[0] = sumsum;
        card[1] = sumsum;
    }
    long long sol = accumulate(card.begin(),card.end(),0LL);

    cout << sol <<endl;
}