#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll a, b;
    cin >> a >> b;
    ll ans = abs(a-b);
    cout<<ans<<" ";
    if(ans==0){
        cout<<0<<endl;
        return;
    }
    ll gre = max(a,b);
    ll low = (gre%ans);
    ll high = ans-(gre%ans);
    cout<<min(low, high)<<endl;
    
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
