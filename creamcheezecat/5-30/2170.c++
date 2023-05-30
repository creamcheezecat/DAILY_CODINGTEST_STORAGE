/*
https://www.acmicpc.net/problem/2170<br/>
선 긋기<br/>
2170
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

#define MAX 1000010
#define INF 1000000010
using namespace std;
 
struct LINE
{
    int Start;
    int End;
};
int N;
LINE Line[MAX];
 
int Max(int A, int B) { return A > B ? A : B; }
 
bool Compare(LINE A, LINE B)
{
    if (A.Start < B.Start) return true;
    return false;
}
 
void Input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> Line[i].Start >> Line[i].End;
    }
}
 
void Solution()
{
    sort(Line + 1, Line + N + 1, Compare);
    int Answer = 0;
    int Left = -INF;
    int Right = -INF;
    
    for (int i = 1; i <= N; i++)
    {
        if (Line[i].Start <= Right)    Right = Max(Right, Line[i].End);
        else
        {
            Answer += Right - Left;
            Left = Line[i].Start;
            Right = Line[i].End;
        }
    }
    Answer += Right - Left;
    cout << Answer << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}

    /* int N ;
    cin >> N;
    map<long long,long long> pot;
    map<long long,long long>::iterator i;
    int x , y;
    for (int i = 0; i < N; i++){
        cin >> x>> y;
        pot[x] = y; 
    }
    long long sol = 0;

    //for(i = pot.begin(); i != pot.end() ; i++){
    //    cout << i->first << " : "<< i->second << endl;
    //}
    long long start = pot.begin()->first;
    long long end = pot.begin()->second;
    for(i = pot.begin()++; i != pot.end() ; i++){
        if(end < i->first){
            sol += end - start;
            start = i->first;
            end = i->second;
        }else{
            end = max(end, i->second);
        }

    }
    sol += end - start; 
    cout << sol << endl; */