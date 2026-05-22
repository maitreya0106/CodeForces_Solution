#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> buttons(n);
    for (int i = 0; i < n; ++i) {
        cin >> buttons[i].first;
        buttons[i].second = i + 1; // 1-based index
    }

    // Sort buttons in non-increasing order of weight
    sort(buttons.begin(), buttons.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });

    int clones = 0;
    set<int> pressed;

    for (int i = 0; i < n; ++i) {
        int pos = buttons[i].second;
        auto it = pressed.upper_bound(pos);
        bool needNewClone = true;

        if (it != pressed.end() && *it == pos + 1) {
            needNewClone = false;
        }
        if (it != pressed.begin()) {
            --it;
            if (*it == pos - 1) {
                needNewClone = false;
            }
        }

        if (needNewClone) {
            ++clones;
        }
        pressed.insert(pos);
    }

    cout << clones << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}