#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;




void solve(){

    ll n;
    cin >> n;
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll active = 0;
    for(auto it: mp){
        active+=it.second;
        if(active>2){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}