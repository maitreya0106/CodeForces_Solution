#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll ans = 0;
    if(a[0]==-1&&a[n-1]==-1){
        a[0]=0;
        a[n-1]=0;
    }
    else if(a[0]==-1){
        a[0]=a[n-1];
    }
    else if(a[n-1]==-1){
        a[n-1]=a[0];
    }
    else{
        ans = abs(a[0]-a[n-1]);
    }

    for(ll i=1; i<n-1; i++){
        if(a[i]==-1) a[i]=0;
    }
    cout << ans << endl;
    for(ll num: a){
        cout << num << " ";
    }
    cout << endl;



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