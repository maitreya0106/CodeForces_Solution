#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {

    ll n,k;
    cin>>n>>k;

    vector<ll>a(n),b(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    ll sumA=0;
    ll bestB=0;
    ll ans=0;

    for(int i=0;i<n && i<k;i++){

        sumA += a[i];

        bestB = max(bestB,b[i]);

        ll remain = k-(i+1);

        ll cur = sumA + bestB*remain;

        ans = max(ans,cur);
    }

    cout<<ans<<"\n";
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
        solve();
}