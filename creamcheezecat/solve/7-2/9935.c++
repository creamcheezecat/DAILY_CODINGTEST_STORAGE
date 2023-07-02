/*
https://www.acmicpc.net/problem/9935<br/>
문자열 폭발<br/>
9935
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <stack>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    string normal, exp,sol;
    cin >> normal >> exp;

    for (int i = 0; i < normal.size(); i++){
        sol.push_back(normal[i]);

        if(sol.size() >= exp.size() && sol.substr(sol.size() - exp.size()) == exp){
            for(int i = 0; i < exp.size(); i++){
                sol.pop_back();
            }
        }
        /* if(normal[i] == exp.front()){
            if(normal.find(exp,i)){
                i += exp.size();
                continue;
            }
        } */
    }

    if (sol.empty()) {
        cout << "FRULA" << endl;
    } else {
        cout << sol << endl;
    }
}
    // 시간초과
    /* int find_idx;
    do{
        find_idx = normal.find(exp);
        if(find_idx != string::npos){
            normal.erase(find_idx, exp.size());
        }
    }while(find_idx != string::npos);

    if(normal.size() > 0){
        cout << normal << endl;
    }else{
        cout << "FRULA" << endl;
    } */