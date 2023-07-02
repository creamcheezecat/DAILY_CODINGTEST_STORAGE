/*
https://www.acmicpc.net/problem/8595
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <cstring>
using namespace std;


int main() {
    int n;
    cin >> n;
    string N;
    string temp;
    cin >> N;
    
    long long sol = 0;

    for (int i = 0; i < N.size() ; i++){
        if( N[i] >= '0' && N[i] <= '9'){
            temp.push_back(N[i]);
            continue;
        }else{
            if (!temp.empty()) {
                sol += stoi(temp);
                temp.clear();
            }
        }
    }
    if (!temp.empty()) {
        sol += stoi(temp);
    } 

    cout << sol << endl;

    return 0;
}