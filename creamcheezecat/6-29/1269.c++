/*
https://www.acmicpc.net/problem/1269<br/>
대칭차집합<br/>
1269
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
using namespace std;

int main() 
{
    int a,b,n;
    cin >> a >> b;
    set<int> A;


    for(int i = 0; i < a ; i++){
        cin >> n;
        A.insert(n);
    }

    for (int i = 0; i < b ; i++){
        cin >> n;
        if(A.find(n) == A.end()){
            a++;
        }else{
            a--;
        }
    }

    cout << a <<endl;
    


    /* for (int i = 0; i < a ; i++){
        cin >> A[i];
    }

    for (int i = 0; i < b ; i++){
        cin >> B[i];
    }

    long long sol = 0;
    vector<int> diff;
    set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(diff));

    sol += diff.size();
    diff.clear();

    set_difference(B.begin(), B.end(), A.begin(), A.end(), back_inserter(diff));

    sol += diff.size();

    cout << sol << endl; */

    return 0;
}