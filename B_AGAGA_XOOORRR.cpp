#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);

    ll x=0;
    for(ll i=0; i<n; i++){
        ll c;
        cin >> c;
        a[i]=c;
        x^=c;
    }
    if(x==0){
        cout << "YES" << endl;
        return;
    }
    ll pre = 0;
    ll prei = -1;
    for(ll i=0; i<n; i++){
        pre^=a[i];
        if(pre==x){
            prei = i;
            break;
        }
    }
    ll suf = 0;
    ll sufi = -1;
    for(ll i=n-1; i>=0; i--){
        suf^=a[i];
        if(suf==x){
            sufi=i;
            break;
        }
    }
    if(prei<sufi){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}