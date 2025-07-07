#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int pearls = 0, links = 0;
    string s;
    cin >> s;

    for (char c : s) {
        if (c == 'o') pearls++;
        else links++;
    }

    if (pearls == 0 || links % pearls == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}