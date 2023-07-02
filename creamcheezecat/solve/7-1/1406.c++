/*
https://www.acmicpc.net/problem/1406<br/>
에디터<br/>
1406
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <string>
#include <cstring>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    string N;
    string temp;
    cin >> N;
    int M;
    //int cursor = N.size();
    cin >> M;
    char x , y;
    for(int i = 0 ; i < M ; i++){
        cin >> x;
        switch(x){
/*             case 'P':
                char y;
                cin >> y;
                N.insert(cursor, 1, y);  // insert() 함수를 사용하여 문자를 삽입
                cursor++;  // 커서를 삽입한 문자 다음으로 이동
                break;
            case 'L':
                if (cursor > 0) {
                    cursor--;  // 커서를 왼쪽으로 한 칸 이동
                }
                break;
            case 'D':
                if (cursor < N.size()) {
                    cursor++;  // 커서를 오른쪽으로 한 칸 이동
                }
                break;
            case 'B':
                if (cursor > 0) {
                    N.erase(cursor - 1, 1);  // erase() 함수를 사용하여 문자를 삭제
                    cursor--;  // 커서를 왼쪽으로 한 칸 이동
                }
                break; */
            case 'P':
                cin >> y;
                N.push_back(y);
                /* if(N.size() == nsize){
                    N.push_back(y);
                }else{
                    for (int i = 0 ; i < (N.size() - nsize) ; i++){
                        temp.push_back(N.back());
                        N.pop_back();
                    }
                    N.push_back(y);
                    while(!temp.empty()){
                        N.push_back(temp.back());
                        temp.pop_back();
                    }
                } */
                break;
            case 'L':
                if(!N.empty()){
                    temp.push_back(N.back());
                    N.pop_back();
                }
                /* if(nsize > 0){
                    nsize--;
                } */
                break;
            case 'D':
                if(!temp.empty()){
                    N.push_back(temp.back());
                    temp.pop_back();
                }
                /* if(nsize < N.size()){
                    nsize++;
                } */
                break;
            case 'B':
                if(!N.empty()){
                    N.pop_back();
                }
                /* if(N.size() == nsize){
                    N.pop_back();
                }else{
                    for (int i = 0 ; i < N.size()-nsize ; i++){
                        temp.push_back(N.back());
                        N.pop_back();
                    }
                    N.pop_back();
                    while(!temp.empty()){
                        N.push_back(temp.back());
                        temp.pop_back();
                    }
                } */
                break;
        }
    }
    while(!temp.empty()){
        N.push_back(temp.back());
        temp.pop_back();
    }

    cout << N << endl;
}