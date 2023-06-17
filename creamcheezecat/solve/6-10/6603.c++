#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void setprintf(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(6);

    // 조합을 생성하기 위한 인덱스 배열
    vector<int> indices(n, 0);
    for (int i = 0; i < 6; i++)
        indices[i] = 1;

    // 조합 생성을 위한 반복문
    do {
        // 현재 인덱스에 해당하는 수 저장
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (indices[i]) {
                result[j] = arr[i];
                j++;
            }
        }

        // 조합 출력
        for (int i = 0; i < 6; i++) {
            cout << result[i] << ' ';
        }
        cout << '\n';

    } while (prev_permutation(indices.begin(), indices.end()));
}

int main() {
    while (true) {
        int k;
        cin >> k;
        if (k == 0)
            break;

        vector<int> testcase(k);
        for (int i = 0; i < k; i++)
            cin >> testcase[i];

        setprintf(testcase);
        cout << '\n';
    }

    return 0;
}