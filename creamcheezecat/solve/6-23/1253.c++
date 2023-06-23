/*
https://www.acmicpc.net/problem/1253<br/>
좋다<br/>
1253
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
    vector<long long> good_num(N);
    for (int i = 0; i < N ; i++){
        cin >> good_num[i];
    }
    sort(good_num.begin(),good_num.end());
    int sol = 0;
    for (int i = 0; i < N ; i++){
        long long mid,start=0, end=N-1;
        while(start < end){
            if(start == i ){
                start++;
                continue;
            }
            if(end == i){
                end--;
                continue;
            }
            if(good_num[i] == good_num[start] + good_num[end]){
                sol++;
                break;
            }else if(good_num[i] > good_num[start] + good_num[end]){
                start++;
            }else{
                end--;
            }
        }
    }

    cout << sol << endl;
    
}