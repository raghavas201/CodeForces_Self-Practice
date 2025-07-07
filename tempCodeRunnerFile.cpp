#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N == 1) {
            cout << -1 << "\n";
            continue;
        }
        vector<int> A;
        if (N % 2 == 0) {
            for (int i = 0; i < N/2; i++) {
                A.push_back(1);
                A.push_back(-1);
            }
        } else {
            int pairs = (N - 3) / 2;
            for (int i = 0; i < pairs; i++) {
                A.push_back(1);
                A.push_back(-1);
            }
            A.push_back(1);
            A.push_back(1);
            A.push_back(-2);
        }
        for (int i = 0; i < N; i++) {
            cout << A[i] << (i + 1 < N ? ' ' : '\n');
        }
    }
    return 0;
}
