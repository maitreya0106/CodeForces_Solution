#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;




void solve(){

    ll n;
    cin >> n;
    vector<vector<ll>> a(n);
    for(ll i=0; i<n; i++){
        ll l, r;
        cin >> l >> r;
        a[i]={l,r,i+1};
    }
    sort(a.begin(),a.end(),[&](vector<ll>&v1, vector<ll>& v2){
        if(v1[0]==v2[0]){
            return v1[1]>v2[1];
        }
        else return v1[0]<v2[0];
    });
    ll ind = a[0][2];
    ll maxv = a[0][1];
    for(ll i=1; i<n; i++){
        if(a[i][1]<=maxv){
            cout << a[i][2] << ' ' << ind << endl;
            return;
        }
        if(a[i][1]>=maxv){
            maxv=a[i][1];
            ind = a[i][2];
        }
    }
    cout << -1 << ' ' << -1 << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}