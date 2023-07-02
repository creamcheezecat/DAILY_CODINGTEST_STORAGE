/*
https://www.acmicpc.net/problem/11816
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;


int main() {
    string N;
    cin >> N;

    if (N[0] == '0') {
        if (N.size() > 1 && N[1] == 'x') { // 16진수 처리
            N = N.substr(2);
            cout << stoi(N, nullptr, 16) << endl;
        } else { // 8진수 처리
            N = N.substr(1);
            cout << stoi(N, nullptr, 8) << endl;
        }
    } else { // 10진수 처리
        cout << stoi(N) << endl;
    }

    return 0;
}