/*
https://www.acmicpc.net/problem/13335<br/>
트럭<br/>
13335
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <queue>
using namespace std;

int main()
{
    int n, w, L;
    cin >> n >> w >> L;

    vector<int> truck(n);
    for (int i = 0; i < n; i++)
        cin >> truck[i];

    queue<int> bridge;
    int time = 0, weight = 0;

    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            if (bridge.size() == w)
            {
                weight -= bridge.front();
                bridge.pop();
            }

            if (weight + truck[i] <= L)
                break;

            bridge.push(0);
            time++;
        }

        bridge.push(truck[i]);
        weight += truck[i];
        time++;
    }

    time += w;

    cout << time << endl;

    return 0;
}

   /* for (int i = 0; i < n-1 ; i++){
        while(true){
            if(truck[i] + truch[i+1] > L){
                time += w;
                break;
            }else{
                times++;
            }
            
        }
    } */