/*
https://www.acmicpc.net/problem/2448<br/>
별 찍기 - 11<br/>
2448
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

void star(int N){
    if(N*2 % 3)
    star(N-1)
}

int main() 
{// N = 3x2^k 수 (3,6,12,24,48)
    int N;
    cin >> N;

    start(N);
}