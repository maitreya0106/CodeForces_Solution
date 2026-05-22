#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> freq(n,0);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        freq[x-1]++;
    }
    sort(freq.rbegin(),freq.rend());
    ll ans = freq[0];
    ll cur = ans-1;
    for(ll i=1; i<n; i++){
        if(freq[i]>=cur){
            ans+=cur;
            cur = max(0LL,cur-1);
        }
        else{
            ans+=freq[i];
            cur = max(0LL,freq[i]-1);
        }
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