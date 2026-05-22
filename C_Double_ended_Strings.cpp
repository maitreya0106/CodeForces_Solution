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
    string a,b;
    cin >> a >> b;
    ll ans = 0;
    for(ll i=0; i<a.size(); i++){
        for(ll j=0; j<b.size(); j++){
            ll cnt = 0;
            if(a[i]==b[j]){
                ll t1 = i;
                ll t2 = j;
                while(t1<a.size() && t2<b.size() && a[t1]==b[t2]){
                    t1++;
                    t2++;
                    cnt++;
                }
                ans = max(ans, cnt);

            }
        }
    }
    cout << a.size()+b.size()-2*ans << "\n";
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
