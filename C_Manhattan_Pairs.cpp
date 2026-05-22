#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<long long> x(n), y(n), s(n);
        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
            s[i] = x[i] + y[i];
        }
        // build vector of (s_i, i)
        vector<pair<long long,int>> order;
        order.reserve(n);
        for(int i = 0; i < n; i++){
            order.emplace_back(s[i], i);
        }
        sort(order.begin(), order.end());
        // output pairs: smallest with largest, etc.
        for(int k = 0; k < n/2; k++){
            int i = order[k].second;
            int j = order[n-1-k].second;
            // convert 0-based to 1-based
            cout << (i+1) << " " << (j+1) << "\n";
        }
    }
    return 0;
}
