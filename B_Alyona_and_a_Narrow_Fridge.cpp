#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,h;
    cin >> n >> h;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    vector<ll> b;
    ll ans = 0;
    for(int i=0; i<n; i++){
        b.push_back(a[i]);
        sort(b.rbegin(),b.rend());
        ll temp = 0;
        for(ll j=0; j<b.size(); j+=2){
            temp+=b[j];
        }
        if(temp<=h) ans = i+1;
        else break;
    }
    cout << ans;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        solve();
}