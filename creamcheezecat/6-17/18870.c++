/*
https://www.acmicpc.net/problem/18870<br/>
좌표 압축<br/>
18870
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

    vector<long long> arr(N);
    vector<long long> sortedArr(N);
    map<long long, long long> compressedArr;

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        sortedArr[i] = arr[i];
    }

    sort(sortedArr.begin(), sortedArr.end());
    sortedArr.erase(unique(sortedArr.begin(), sortedArr.end()), sortedArr.end());

    for (int i = 0; i < sortedArr.size(); ++i) {
        compressedArr[sortedArr[i]] = i;
    }

    for (int i = 0; i < N; ++i) {
        cout << compressedArr[arr[i]] << ' ';
    }
    cout << endl;


}

    /* 
    vector<long long> pos(N,0);
    vector<int> press(N,0);
    for (int i = 0; i < N ; i++){
        cin >> pos[i];
    }
    for (int i = 1; i < N ; i++){
        for (int j = i-1; j >= 0 ; j--){
            if(pos[i] > pos[j]){
                press[i]++;
            }else if(pos[i] < pos[j]){
                press[j]++;
            }else{
                
            }
        }   
    }
    for (int i = 0; i < N ; i++){
        cout << press[i] << " ";
    } */