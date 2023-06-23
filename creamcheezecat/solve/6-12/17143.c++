/*
https://www.acmicpc.net/problem/17143<br/>
낚시왕<br/>
17143
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

struct shark{
    int r; //행 위치
    int c; //열 위치
    int s; //속력
    int d; //이동방향 1 위 2 아래 3 오른쪽 4 왼쪽
    int z; //크기
}
struct Compareshark {
    bool operator()(const shark& shark1, const shark& shark2) {
        return shark1.r < shark2.r;
    }
};
int main() 
{
    int R,C ,M ; // 격자판 R,C    M 상어 수
    vector<shark> sharks(M);
    int a,b,c,d,e;
    for (int i = 0; i < M ; i++){
        cin >> a >> b >> c >> d >>e;
        sharks[i].r = a;
        sharks[i].c = b;
        sharks[i].s = c;
        sharks[i].d = d;
        sharks[i].z = e;
    }

    int catching = 0;
    int min_r;
    // 시작
    for(int i = 1; i <= C; i++){
        min_r = R;
        sort(sharks.begin(),shark.end(),Compareshark);
        for(int m = 0 ; m < sharks.size() ; m++){
            if(sharks[m].c == i){
               catching += sharks[m].z;
               sharks.erase(sharks.begin()+m);
            }
        }

        for(int m = 0 ; m < sharks.size() ; m++){
            switch(sharks[m].d){
                case 1:

                if((sharks[m].r - sharks[m].s) < 0){
                    sharks[m].r = (sharks[m].s - sharks[m].r)+2;
                    sharks[m].d = 2;
                }else if((sharks[m].r - sharks[m].s) == 0){
                    sharks[m].r = 2;
                    sharks[m].d = 2;
                }else{
                    sharks[m].r -= sharks[m].s;
                }

                break;
                case 2:

                if((sharks[m].r + sharks[m].s) > R){
                    sharks[m].r = (sharks[m].s - sharks[m].r)+2;
                    sharks[m].d = 1;
                }else if((sharks[m].r + sharks[m].s) == 0){
                    sharks[m].r = R;
                    sharks[m].d = 1;
                }else{
                    sharks[m].r += sharks[m].s;
                }

                break;
                case 3:

                if((sharks[m].c - sharks[m].s) < 0){
                    sharks[m].c = (sharks[m].s - sharks[m].c)+2;
                    sharks[m].d = 4;
                }else if((sharks[m].c - sharks[m].s) == 0){
                    sharks[m].c = C-1;
                    sharks[m].d = 4;
                }else{
                    sharks[m].c -= sharks[m].c;
                }

                break;
                case 4:

                if((sharks[m].r + sharks[m].s) < 0){
                    sharks[m].r = (sharks[m].s - sharks[m].r)+2;
                    sharks[m].d = 3;
                }else if((sharks[m].r - sharks[m].s) == 0){
                    sharks[m].r = 2;
                    sharks[m].d = 3;
                }else{
                    sharks[m].r -= sharks[m].s;
                }


                break;
            }
        }

        for(int m = 0 ; m < sharks.size()-1 ; m++){
            if(sharks[m].r == sharks[m].c){
                if(sharks[m].c == sharks[m].c){
                    sharks.
                }

            }
        }
    }


}