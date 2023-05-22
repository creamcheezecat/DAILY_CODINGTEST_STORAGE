/*
https://www.acmicpc.net/problem/11501<br/>
주식<br/>
11501
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
    int T;
    cin >> T;
   
    while(T--){
        int N;
        int stock_max;
        long long profit = 0;
        cin >> N;
        vector<int> stock(N,0);
        for (int i = 0; i < N; i++) {
            cin >> stock[i];
        }
        stock_max = stock[N-1];
        for (int i = N - 2 ; i >= 0 ; i--){
            if (stock[i] > stock_max){
                stock_max = stock[i];
            }else{
                profit += stock_max - stock[i];
            }
        }
        /* vector<int> buystock(N,0);
        profit = 0;
        stock_count = 0;
        for (int i = 0 ; i < N; i++){
            cin >> stock[i];
        }
        stock_count = 0;        
        for (int i = 0 ; i < N-1; i++){
            if (stock[i] < stock[i+1]){
                buystock[stock_count] = stock[i];
                stock_count++;
            }else{
                if(stock_count == 0){
                    continue;
                }
                else{
                    while(stock_count > 0){
                        profit += stock[i+1] - buystock[stock_count];
                        stock_count--;
                    } 
                }
            }

        } */

        cout << profit << endl;
    }
    return 0;
}