#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int j=0; j<n; j++) cin >> b[j];
    ll ans = 0;
    unordered_map<int,int> mp;
    ll t = 0;
    ll d = 0;
    while(d<n){
        if(a[t]==b[d]){
            t++;
            d++;
        }
        else{
            if(mp.find(a[t])!=mp.end()){
                t++;
                ans++;
            }
            else{
                mp[b[d]]++;
                d++;
            }
        }
    }
    cout << ans+n-t << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        solve();
}