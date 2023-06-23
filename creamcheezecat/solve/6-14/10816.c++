#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> handcard(N);
    for (int i = 0; i < N; i++) {
        cin >> handcard[i];
    }

    int M;
    cin >> M;
    vector<int> numcard(M);
    for (int i = 0; i < M; i++) {
        cin >> numcard[i];
    }

    sort(handcard.begin(), handcard.end());

    for (int i = 0; i < M; i++) {
        auto lower = lower_bound(handcard.begin(), handcard.end(), numcard[i]);
        auto upper = upper_bound(handcard.begin(), handcard.end(), numcard[i]);
        int count = upper - lower;
        cout << count << ' ';
    }

    cout << endl;

    return 0;
}