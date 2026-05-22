#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> fir;
    vector<ll> sec;
    for(ll i=0; i<x; i++){
        fir.push_back(a[i]);
    }
    for(ll i=x; i<y; i++){
        sec.push_back(a[i]);
    }
    for(ll i=y; i<n; i++){
        fir.push_back(a[i]);
    }
    
    ll i2 = 0;
    ll test = INT_MAX;
    for(ll i=0; i<sec.size(); i++){
        if(sec[i]<test){
            test = sec[i];
            i2 = i;
        }
    }
    vector<ll> f2;
    for(ll i=i2; i<sec.size(); i++){
        f2.push_back(sec[i]);
    }
    for(ll i=0; i<i2; i++){
        f2.push_back(sec[i]);
    }
    test = f2[0];
    ll ind = fir.size();
    for(ll i=0; i<fir.size(); i++){
        if(test<fir[i]){
            ind = i;
            break;
        }
    }
    vector<ll> ans;
    for(ll i=0; i<ind; i++){
        ans.push_back(fir[i]);
    }
    for(ll i=0; i<f2.size(); i++){
        ans.push_back(f2[i]);
    }
    for(ll i=ind; i<fir.size(); i++){
        ans.push_back(fir[i]);
    }

    for(ll i=0; i<ans.size(); i++){
        cout << ans[i] << " ";  
    }
    cout << '\n';

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