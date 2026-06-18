#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    ll z = 0;
    ll o = 0 , t= 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x==0) z++;
        if(x==1) o++;
        if(x==2) t++;
    }
    ll ans = z;
    if(o<t){
        ans+=o;
        t-=o;
        ans+=(1*t)/3;
    }
    else{
        ans+=t;
        o-=t;
        ans+=(1*o)/3;
    }
    cout << ans << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }



    
    return 0;
}