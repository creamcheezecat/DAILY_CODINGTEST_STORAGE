/*
https://www.acmicpc.net/problem/1475<br/>
방 번호<br/>
1475
*/

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() 
{
    int N,sol;
    cin >> N;
    vector<int> num(10,0);

    while(N > 0){
        num[N%10]++;
        N /= 10;
    }
    if((num[6] + num[9])%2 == 0){
        num[6] = (num[6] + num[9]) / 2 ;
    }else{
        num[6] = (num[6] + num[9]) / 2  + 1;
    }
    num[9] = 0;
    sol = *max_element(num.begin(), num.end());

    cout << sol <<endl;
}