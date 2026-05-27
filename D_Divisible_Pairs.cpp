#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    map<ll,ll> mp1,mp2;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll num;
        cin >> num;
        if(mp1.find((x-num%x)%x)!=mp1.end()&&mp2.find((y-num%y)%y)!=mp2.end()){
            ans+=min(mp1[(x-num%x)%x],mp2[(y-num%y)%y]);
        }

        mp1[num%x]++;
        mp2[num%y]++;
    }
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