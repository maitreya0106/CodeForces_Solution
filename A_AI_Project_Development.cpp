#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, x, y ,z;
    cin >> n >> x >> y >> z;
    ll fir = (n+x+y-1)/(x+y);
    ll rem = n-(x*z);
    if(rem<=0){
        cout << fir << endl;
        return;
    }
    ll div = x+(10*y);
    ll sec = z+(rem+div-1)/div;
    cout << min(fir,sec) << endl;
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