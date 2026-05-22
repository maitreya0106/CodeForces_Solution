#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    map<int, int> freq;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        freq[b[i]]++;
    }
    
    for (auto& [val, count] : freq) {
        if (count % 2 != 0) {
            cout << -1 << "\n";
            return;
        }
    }
    
    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 1; i <= n; i++) {
        adj[a[i]].push_back({b[i], i});
        adj[b[i]].push_back({a[i], -i});
    }
    
    vector<int> swaps;
    vector<bool> used_edge(n + 1, false);
    
    for (int i = 1; i <= n; i++) {
        if (adj[i].empty()) continue;
        
        auto dfs = [&](auto& self, int u) -> void {
            while (!adj[u].empty()) {
                auto [v, id] = adj[u].back();
                adj[u].pop_back();
                if (used_edge[abs(id)]) continue;
                
                used_edge[abs(id)] = true;
                if (id < 0) {
                    swaps.push_back(abs(id));
                }
                self(self, v);
            }
        };
        dfs(dfs, i);
    }
    
    cout << swaps.size() << "\n";
    for (int i = 0; i < swaps.size(); i++) {
        cout << swaps[i] << (i == swaps.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}