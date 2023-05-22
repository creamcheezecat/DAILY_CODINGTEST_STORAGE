/*
https://www.acmicpc.net/problem/3273
두 수의 합
3273
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
    int n;
    cin >> n;
    
    vector<int> proc(n,0);
    for (int i = 0; i < n ; i++){
        cin >> proc[i];
    }
    
    int x;
    cin >> x;
    
    sort(proc.begin(),proc.end());
    int sol = 0;
    int start_p = 0, end_p = n-1;
    while(start_p < end_p){
        if (proc[start_p] + proc[end_p] == x){
            sol++;
            end_p--;
            start_p++;
        }
        else if(proc[start_p] + proc[end_p] > x){
            end_p--;
        }
        else{
            start_p++;
        }
    } 

    // 시간 초과
    /* int sol = 0;
    for (int i = 0 ; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if((proc[i] + proc[j]) == x){
                sol++;
            }
        }
    } */

    
    /* for (int i = 0; i < n ; i++){
        cout << proc[i] << " ";
    }
    // 로직 오류
    int sol = 0;
    int procsum = 0;
    int curcount = 0;
    for (int i = 0; i < n ; i++){
        curcount = i;
        while(procsum < x){
            procsum += proc[curcount];
            curcount++;
        }
        if(procsum == x){
            sol++;
        }
        procsum = 0;
    }
    */
    cout << sol << endl;

}