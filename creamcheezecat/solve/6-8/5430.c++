/*
https://www.acmicpc.net/problem/5430<br/>
AC<br/>
5430
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string comm;
        cin >> comm;
        int n;
        cin >> n;
        string numb;
        cin >> numb;

        int start = 1;
        int end = numb.length() - 2;
        stringstream ss(numb.substr(start, end - start + 1));
        int num;
        vector<int> numbers;

        while (ss >> num) {
            numbers.push_back(num);
            if (ss.peek() == ',')
                ss.ignore();
        }

        bool reversed = false;
        int start_idx = 0;
        int end_idx = numbers.size() - 1;

        bool error = false;  // 에러 발생 여부를 저장하는 변수 추가

        for (char c : comm) {
            if (c == 'R') {
                reversed = !reversed;
            }
            else if (c == 'D') {
                if (numbers.empty()) {
                    error = true;  // 배열이 비어있을 때 에러 발생
                    break;
                }
                if (reversed) {
                    numbers.pop_back();
                }
                else {
                    numbers.erase(numbers.begin());
                }
            }
        }

        if (error) {
            cout << "error" << endl;
        }
        else {
            cout << "[";
            if (reversed) {
                for (int i = numbers.size() - 1; i >= 0; --i) {
                    cout << numbers[i];
                    if (i > 0)
                        cout << ",";
                }
            }
            else {
                for (int i = 0; i < numbers.size(); ++i) {
                    cout << numbers[i];
                    if (i < numbers.size() - 1)
                        cout << ",";
                }
            }
            cout << "]" << endl;
        }
    }

    return 0;
}