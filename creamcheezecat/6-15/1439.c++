/*
https://www.acmicpc.net/problem/1439<br/>
뒤집기<br/>
1439
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
    string S;
    cin >> S;
    char cur = S[0];
    int s_count=0;
    for (int i = 1; i < S.size(); i++){
        if(cur != S[i]){
            s_count++;
            cur = S[i];
        }
    }

    cout << (int)(s_count+1)/2 << endl;
}