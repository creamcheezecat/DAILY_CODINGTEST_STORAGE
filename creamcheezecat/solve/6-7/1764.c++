/*
https://www.acmicpc.net/problem/1764<br/>
듣보잡<br/>
1764
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
    int N,M;
    cin >> N >> M;

    vector<string> no_listen(N);
    vector<string> no_see(M);
    vector<string> nono_p(M+N);
    for(int i = 0 ; i < N ; i++){
        cin >> no_listen[i];
    }

    for(int i = 0 ; i < M; i++){
        cin >> no_see[i];
    }

    sort(no_listen.begin(), no_listen.end());
    sort(no_see.begin(), no_see.end());

    vector<string>::iterator iter;
    iter = set_intersection(no_listen.begin(), no_listen.end(), no_see.begin(), no_see.end(), nono_p.begin());
    nono_p.resize(iter - nono_p.begin());


    cout << nono_p.size()<< endl;
    
    for(iter = nono_p.begin(); iter != nono_p.end(); iter++){
        cout << *iter << endl;
    }
}


    /* string no_see_p;
    int p_count = 0;
    for(int i = 0 ; i < M ; i++){
        cin >> no_see_p;
        for(int j = 0 ; j < N ; j++){
            if(no_see_p == no_listen[j]){
                nono_p.push_back(no_see_p);
                p_count++;
                break;
            }
        }
    }

    cout << p_count<< endl;
    
    for(iter = nono_p.begin(); iter != nono_p.end(); iter++){
        cout << *iter << endl;
    } */

   
    /*for(int i = 0 ; i < N ; i++){
        cout << no_listen[i] << endl;
    }
    for(int i = 0 ; i < M ; i++){
        cout <<  no_see[i] << endl;
    } */