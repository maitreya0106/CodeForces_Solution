#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n==1){
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    ll maxv = INT_MIN;
    for(int i=0; i < n-1; i++) {
        if(abs(a[i]-a[i+1]) <= k){
            ans++;
            maxv = max(maxv, ans);
        }
        else{
            ans=0;
        }
    }
    if(maxv == INT_MIN){
        cout << a.size()-1 << endl;
        return;

    }
    cout << a.size()-maxv-1 << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}