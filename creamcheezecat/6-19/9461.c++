/*
https://www.acmicpc.net/problem/9461<br/>
파도반 수열<br/>
9461
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
    int T , N;
    cin >> T;
    vector<long long> tri(101,0);
    tri[0] = 0;
    tri[1] = 1;
    tri[2] = 1;
    tri[3] = 1;
    tri[4] = 2;
    tri[5] = 2;
    while(T--){
        cin >> N;
    
        for (int i = 6; i <= N; i++){
            tri[i] = tri[i-1]+tri[i-5];
        }

        cout << tri[N]<< endl;
    }
}