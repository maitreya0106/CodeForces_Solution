#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, m;
    cin >> n >> m;
    ll max_v = -1;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        max_v = max(max_v,x);
    }
    for(ll i=0; i<m; i++){
        char op;
        ll a, b;
        cin >> op >> a >> b;
        if(max_v>=a&&max_v<=b){
            if(op=='+'){
                max_v++;
            }
            else{
                max_v--;
            }
        }
        cout << max_v << ' ';
    }
    cout << endl;


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