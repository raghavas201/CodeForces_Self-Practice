#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool allUpper = true, restUpper = true;
    for (char c : s) if (!isupper(c)) allUpper = false;
    for (int i = 1; i < (int)s.size(); i++) if (!isupper(s[i])) restUpper = false;
    if (allUpper || (islower(s[0]) && restUpper)) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }
    cout << s << "\n";
    return 0;
}
