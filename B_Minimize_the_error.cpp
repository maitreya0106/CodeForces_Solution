#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;




void solve(){

    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    ll k = k1+k2;
    vector<ll> a(n);
    priority_queue<ll> q;
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++){
        ll b;
        cin >> b;
        q.push(abs(a[i]-b));
    }
    while(!q.empty()&&(q.top()!=0)&&k>0){

        ll top = q.top();
        q.pop();
        --top;
        q.push(top);
        k--;
    }

    ll ans = 0;

    if(k%2) ans+=1;
    while(!q.empty()){
        ans += q.top()*q.top();
        q.pop();
    }
    cout << ans << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}