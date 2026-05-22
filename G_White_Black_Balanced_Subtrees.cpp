#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){

    ll n;
    cin >> n;
    vector<ll> a(n+1);
    for(ll i=2; i<=n; i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<ll> val(n+1);
    for(ll i=1; i<=n; i++){
        if(s[i-1]=='W') val[i]=1;
        else val[i]=-1;
    }
    ll ans = 0;
    for(ll i=n; i>=2; i--){
        val[a[i]] += val[i];
        if(val[i]==0) ans++;
    }
    if(val[1]==0) ans++;
    cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}