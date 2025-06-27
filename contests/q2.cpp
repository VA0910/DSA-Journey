#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;

        vector<int> t(n);
        for (int i = 0; i < n; ++i) {
            cin >> t[i];
        }

        sort(t.begin(), t.end());

        int unpleasant = 0;
        for (int i = 0; i < n; ++i) {
            // Assign time slot (i+1) to t[i]
            unpleasant += abs(t[i] - (i + 1));
        }

        cout << unpleasant << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
