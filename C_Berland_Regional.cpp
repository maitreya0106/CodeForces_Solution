#include <bits/stdc++.h>
using namespace std;

void solve() {
		int n; 
        cin >> n;

		vector<int> u(n), s(n);
		for (int i = 0; i < n; i++) cin >> u[i]; // university of i-th student (1-indexed)
		for (int i = 0; i < n; i++) cin >> s[i]; // skill of i-th student

		vector<vector<int>> skills(n); // skills[u] holds all skills for university u (0-indexed)
		for (int i = 0; i < n; i++) {
			skills[u[i] - 1].push_back(s[i]); // group students by university
		}

		for (auto &v : skills) {
			sort(v.begin(), v.end()); // sort ascending to later drop weakest leftovers efficiently
		}

		vector<vector<long long>> pre(n, vector<long long>(1, 0)); // pre[i][j] = sum of first j skills (ascending) for uni i
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < (int)skills[i].size(); j++) {
				pre[i].push_back(pre[i].back() + skills[i][j]); // build prefix sums with a leading 0
			}
		}

		vector<long long> ans(n + 1);
		for (int i = 0; i < n; i++) {
			int nums = (int)skills[i].size(); 
			for (int k = 1; k <= nums; k++) {

				ans[k] += pre[i].back() - pre[i][nums % k];
			}
		}

		for (int i = 1; i <= n; i++) cout << ans[i] << ' '; 
		cout << '\n';
}

int main() {

		cin.tie(0);
		cout.tie(0);
		cin.sync_with_stdio(false); 

		int t; 
		cin >> t; 
		while (t--) {
			solve();
		}
}

