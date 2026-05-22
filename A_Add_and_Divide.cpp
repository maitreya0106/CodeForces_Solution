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
    ll a,b; 
    cin >> a >> b;
    ll ans = LLONG_MAX;
    for(ll i=0; i<=32; i++){
        ll new_b = b+i;
        ll op = i;
        if(new_b==1){
            continue;
        }
        ll copy_a = a;
        while(copy_a>0){
            copy_a/=new_b;
            op++;
        }
        ans = min(ans,op);
    }
    cout << ans << endl;
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
