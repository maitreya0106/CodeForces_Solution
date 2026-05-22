#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}





void solve() {
    ll n,r,b;
    cin >> n >> r >> b;
    
    string ans = "";
    ll redv = r / (b + 1);
    ll rem = r % (b + 1);
    for(ll i = 1; i<= b+1; i++){
        for(ll j=1; j<= redv; j++){
            ans += 'R';
        }
        if(rem>0){
            ans += 'R';
            rem--;
        }
        if(i!=b+1){
            ans += 'B';
        }
    }
    cout << ans << endl;
    return;
    

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
