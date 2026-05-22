#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    ll sum = 0;
    for(ll i=0; i<n; i++){
        if(s[i]=='('){
            sum++;
        }
        else if(s[i]==')'){
            sum--;
        }
        if(sum<0){
            ans++;
            sum = 0;
        }
    }
    cout << ans << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
