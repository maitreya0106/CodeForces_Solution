#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, w;
    cin >> n >> w;
    ll div = n/w;
    ll ans = div*(n-1);
    ans+=(n-(div*n));
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