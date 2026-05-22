#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    for(ll i=1; i<=n; i++) cin >> a[i];
    vector<ll> pre(n+1,0);
    for(ll i=1; i<=n; i++){
        pre[i]=pre[i-1]^a[i];
    }
    string s;
    cin >> s;
    s = '*'+s;
    ll xor0 = 0;
    ll xor1 = 0;
    for(ll i=1; i<=n; i++){
        if(s[i]=='1'){
            xor1^=a[i];
        }
        else{
            xor0^=a[i];
        }
    }
    ll q;
    cin >> q;
   
    while(q--){
        ll t;
        cin >> t;
        if(t==2){
            ll g;
            cin >> g;
            if(g==1){
                cout << xor1 << ' ';
            }
            else{
                cout << xor0 << ' ';
            }
        }
        else{
            ll l ,r;
            cin >> l >> r;
            ll num = pre[r]^pre[l-1];
            xor0^=num;
            xor1^=num;
        }

    }
    cout << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}