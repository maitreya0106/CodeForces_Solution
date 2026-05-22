#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> color(n + 1);
        for (int i = 1; i <= n; ++i) cin >> color[i];

        vector<vector<pair<int, int>>> adj(n + 1);
        vector<tuple<int, int, int>> edges;

        for (int i = 1; i < n; ++i) {
            int u, v, c;
            cin >> u >> v >> c;
            adj[u].emplace_back(v, c);
            adj[v].emplace_back(u, c);
            edges.emplace_back(u, v, c);
        }

        ll total_cost = 0;
        for (auto &[u, v, c] : edges) {
            if (color[u] != color[v]) total_cost += c;
        }

        while (q--) {
            int v, x;
            cin >> v >> x;

            for (auto &[u, c] : adj[v]) {
                if (color[u] != color[v]) total_cost -= c;
                if (color[u] != x) total_cost += c;
            }

            color[v] = x;
            cout << total_cost << '\n';
        }
    }

    return 0;
}
