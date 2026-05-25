#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    ll sum = 1;
    if(a[0]!=1){
        cout << "NO" << endl;
        return;
    }
    bool flag = true;
    for(ll i=1; i<n; i++){
        if(a[i]>sum){
            flag = false;
            break;
        }
        sum+=a[i];
    }
    cout << (flag?"YES":"NO") << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}