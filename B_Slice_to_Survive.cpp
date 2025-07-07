#include <bits/stdc++.h>
using namespace std;

int steps(int x) {
    if (x == 1) return 0;
    return 32 - __builtin_clz(x - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int new_h = min(a, n - a + 1);
        int new_w = min(b, m - b + 1);

        int steps_h = steps(new_h) + steps(m);
        int steps_v = steps(n) + steps(new_w);

        cout << 1 + min(steps_h, steps_v) << '\n';
    }

    return 0;
}