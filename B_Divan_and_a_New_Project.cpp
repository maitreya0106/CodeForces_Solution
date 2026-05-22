#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}





void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> map;
    for(ll i=0; i<n; i++){
        ll m;
        cin >> m;
        map.push_back({m,i+1});
    }
    sort(map.rbegin(),map.rend());
    vector<ll> ans(n+1,0);
    ans[0] = 0;
    ll cor = 1;
    ll min = 0;
    for(ll i=0; i<n; i++){
        ans[map[i].second]= cor;
        min += (2*abs(cor)*map[i].first);
        if(cor<0){
            cor = abs(cor)+1;
        }
        else{
            cor = -cor;
        }

    }
    cout << min << endl;
    for(auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
    return;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
