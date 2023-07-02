/*
https://www.acmicpc.net/problem/1759<br/>
암호 만들기<br/>
1759
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

void hacking(vector<char>& sol, int idx, int L, int vow, int con, vector<char>& pw){
    if(sol.size() == L){// 결과 출력
        if(vow >=1 && con >=2){
            for(char c : sol){
                cout << c;
            }
            cout <<endl;
        }
        return;
    }

    for (int i = idx; i < pw.size() ; i++){
        sol.push_back(pw[i]);

        if(pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u'){
            hacking(sol,i+1,L,vow+1,con,pw);
        }else{
            hacking(sol,i+1,L,vow,con+1,pw);
        }

        sol.pop_back();
    }  
}

int main() 
{
    int L,C;
    cin >> L >> C ;
    vector<char> password(C);
    for (int i = 0; i < C ; i++){
        cin >> password[i];
    }

    vector<char> sol;
    sort(password.begin(),password.end());
    
    
    hacking(sol,0,L,0,0,password);

    return 0;
}