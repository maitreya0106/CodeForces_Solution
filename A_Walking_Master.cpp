
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    if(y>b){
        cout << -1 << endl;
        return;
    }
    ll ans = b-y;
    x+= ans;
    y+= ans;
    if(a>x){
        cout << -1 << endl;
        return;
    }
    ans += x-a;
    cout << ans << endl;

 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}