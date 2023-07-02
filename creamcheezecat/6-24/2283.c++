/*
https://www.acmicpc.net/problem/2283<br/>
구간 자르기<br/>
2283
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

struct pos{
    long long left;
    long long right;
};

bool cmp(const pos &a ,const pos &b){
    if(a.left < b.left){
        return true;
    }else if(a.left == b.left){
        if(a.right <b.right){
            return true;
        }
    }
    return false;
}

int main() 
{
    long long N,K;
    cin >> N >> K;
    vector<pos> cutpos(N);
    for (int i = 0; i < N ; i++){
        cin >> cutpos[i].left >> cutpos[i].right;
    }

    sort(cutpos.begin(),cutpos.end(),cmp);

    long long l = cutpos[0].left, r = cutpos[N-1].right, possum = 0;
    bool flag = false;
    while(l < r){
        for(int i = 0 ; i < N ; i++){
            if(cutpos[i].left < l){
                possum += (l - cutpos[i].left);
                cutpos[i].left = l;
            }
            
            if(cutpos[i].right >r){
                possum += (cutpos[i].right - r);
                cutpos[i].right = r;
            }
        }

        if(possum >= K){
            break;
        }

        if(!flag){
            l++;
            flag = true;
        }else{
            r--;
            flag = false;
        }
    }
    
    if(possum >= K){
        cout << l <<" "<< r <<endl;
    }else{
        cout << "0 0"<<endl;
    }
    /* for (int i = 0; i < N ; i++){
        cout << cutpos[i].left << " "<<  cutpos[i].right << endl;
    } */
}