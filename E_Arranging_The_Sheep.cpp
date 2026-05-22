#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> dpl(n,0),dpr(n,0);
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        if(s[i]=='*'){
            cnt++;
            if(i!=0)dpl[i]=dpl[i-1];
        }
        else{
            if(i!=0)dpl[i]=dpl[i-1]+cnt;
        }
    }
    cnt = 0;
    for(ll i=n-1; i>=0; i--){
        if(s[i]=='*'){
            cnt++;
            if(i!=n-1)dpr[i]=dpr[i+1];
        }
        else{
            if(i!=n-1)dpr[i]=dpr[i+1]+cnt;
        }
    }
    ll ans = LLONG_MAX;
    for(ll i=0; i<n; i++) ans = min(ans,dpr[i]+dpl[i]);
    cout << ans << endl;

    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}