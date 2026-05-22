#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
ll fac(ll num){
    ll ans = 1;
    if(num==0) return 1;
    while(num){
        ans=(ans*num)%MOD;
        num--;
    }
    return ans;
}

void solve(){
    string s;
    cin >> s;
    ll cur = 1;
    ll ans = 1;
    ll op = 0;
    for(ll i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            cur++;
        }
        else{
            op += cur-1;
            ans = (ans*cur)%MOD;
            cur=1;
        }
    }
    op += cur-1;
    ans = (ans*cur)%MOD;
    ans = (ans*fac(op))%MOD;
    cout << op << " " << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}