/*
https://www.acmicpc.net/problem/2231
분해합
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;


int main() {

    int n;
    cin >> n;
    int movie = 0;
    int sol = 665;
    int num = 0;
    while(movie < n)
    {
        sol++;
        num = sol;
        while (num > 0) {
            if(666 == num%1000){
                movie += 1;
                break;
            }
            num /= 10;
        }
        
    }
    cout << sol << endl;
    
    return 0;
}
