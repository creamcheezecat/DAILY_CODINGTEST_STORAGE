/*
https://www.acmicpc.net/problem/2011<br/>
암호 코드<br/>
2011
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
    string key;
    
    cin >> key;

    vector<long long> sol(key.size()+1,0);

    sol[0] = 0;

    for(int i = 0; i < key.size(); i++){
        if((int)key[i] < 3 ){
            sol[i+1] = sol[i] + 2;
        }else{
            sol[i+1] = sol[i];
        }
    }

    cout << sol[key.size()] <<endl;

    /* long long ans = 1;
    for (int i = 0; i < sol.size()-1;i++){
        ans *= sol[i];
    }

    cout << ans << endl; */

}