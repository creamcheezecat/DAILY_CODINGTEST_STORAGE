/*
https://www.acmicpc.net/problem/11728
배열 합치기
11728
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    int a,b,n,temp = 0;
    cin >> a >> b;
    vector<int> A(a);
    vector<int> B(b);
    vector<int> result;
    for(int i = 0; i < a ; i++){
        cin >> A[i];
    }

    for(int i = 0; i < b ; i++){
        cin >> B[i];
    }

    int a_idx = 0, b_idx = 0;
    while(a_idx < a && b_idx < b){
        if(A[a_idx] <= B[b_idx]){
            cout << A[a_idx++] << " ";
        }else{
            cout << B[b_idx++] << " ";
        }
    }

    while(a_idx < a){
        cout << A[a_idx++] << " ";
    }

    while(b_idx < b){
        cout << B[b_idx++] << " ";
    }
    return 0;
}