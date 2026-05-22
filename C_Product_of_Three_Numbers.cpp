#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353

void solve(){
    ll n;
    cin >> n;
    vector<ll> fac;
    for(ll i=2; i*i<=n; i++){
        if(n%i!=0) continue;
        fac.push_back(i);
        n = n/i;
        if(fac.size()==2) break;
    }
    if(n==1||fac.size()<2||fac[0]==n||fac[1]==n){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << fac[0] << " " << fac[1] << " " << n << endl;
    }



}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}