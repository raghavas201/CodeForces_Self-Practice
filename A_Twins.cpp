#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        totalSum += coins[i];
    }
    sort(coins.rbegin(), coins.rend());
    int selectedSum = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        selectedSum += coins[i];
        count++;
        if (selectedSum > totalSum / 2) break;
    }
    cout << count << endl;
    return 0;
}