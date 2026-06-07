#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> fac;
    ll num = 2;
    for(ll i=3; i<=14; i++){
        num*=i;
        fac.push_back(num);
    }
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = INT_MAX;
        for(ll mask = 0; mask<=(1<<12)-1; mask++){
            ll sum = 0;
            for(ll i=0; i<12; i++){
                if(mask&(1<<i)) sum+=fac[i];
            }
            if(sum>n) continue;
            ll rem = n-sum;
            ans = min(ans,(long long)__builtin_popcountll(rem)+__builtin_popcountll(mask));
        }
        cout << ans << endl;
    }
    return 0;
}