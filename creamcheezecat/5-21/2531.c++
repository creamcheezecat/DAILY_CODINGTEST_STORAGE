/*
https://www.acmicpc.net/problem/2531<br/>
회전초밥<br/>
2531
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
    int N,d,k,c;
    
    cin >> N >> d >> k >> c;

    vector<int> chibob(N , 0);
    for (int i = 0 ; i < N ; i++){
        cin >> chibob[i];
    }

    vector<int> eating(d+1 , 0);
    int eatcount = 0;
    int maxeat = 0;

    for (int i = 0; i < k; i++) {
        if (eaten[chibob[i]] == 0) { 
            eatcount++;
        }
        eating[chibob[i]]++;
    }

    cout  << endl;

}