/*
https://www.acmicpc.net/problem/2217<br/>
로프<br/>
2217
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
    vector<long long> weight(N);
    for (int i = 0; i < N ; i++){
        cin >> weight[i];
    } 

    sort(weight.begin(), weight.end());

    long long maxWeight = 0;
    for (int i = 0; i < N; i++) {
        maxWeight = max(maxWeight, weight[i] * (N - i));
    }
    //long long maxWeight = weight[0] * N;
    cout << maxWeight << endl;

    return 0;
}

    /* long long left = 1, right = weight[N-1];
    long long sol = 0;

     while (left <= right) {
        long long mid = (left + right) / 2;
        long long heavy = 0;

        for (int i = 0; i < N; i++) {
            if(weight[i] >= mid){
                
            }
        }

        if (!heavy) {
            sol = max(sol,heavy);
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << sol << endl; */