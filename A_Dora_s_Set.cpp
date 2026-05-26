#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    ll i=a;
    while(i<b){
        if(i%2==0){
            i++;
            continue;
        }
        if(i+2>b) break;
        ans++;
        i+=3;
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