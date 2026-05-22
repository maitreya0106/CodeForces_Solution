#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    

    for(ll i=0; i<n; i++){
        if(a[i]%2){
            a[i]+=a[i]%10;
        }
    }
    if(count(a.begin(),a.end(),a[0])==n){
        cout << "Yes" << '\n';
        return;
    }
    for(ll i=0; i<n; i++){
        if(a[i]%10==0){
            cout << "No" << '\n';
            return;
        }
    }
    for(ll i=0; i<n; i++){
        while(a[i]%10!=2){
            a[i]+=a[i]%10;
        }
        a[i]=a[i]%20;
    }
    if(count(a.begin(),a.end(),a[0])==n) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}