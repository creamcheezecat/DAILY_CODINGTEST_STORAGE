/*
https://www.acmicpc.net/problem/1431<br/>
시리얼 번호<br/>
1431
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int getSumOfDigits(string str) {
    int sum = 0;
    for (char ch : str) {
        if (isdigit(ch)) {
            sum += ch - '0';
        }
    }
    return sum;
}

bool compareSerial(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return s1.length() < s2.length();
    } else {
        int sum1 = getSumOfDigits(s1);
        int sum2 = getSumOfDigits(s2);
        if (sum1 != sum2) {
            return sum1 < sum2;
        } else {
            return s1 < s2;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<string> serial(N);
    for (int i = 0; i < N; i++) {
        cin >> serial[i];
    }

    sort(serial.begin(), serial.end(), compareSerial);

    for (int i = 0; i < N; i++) {
        cout << serial[i] << endl;
    }

    return 0;
}