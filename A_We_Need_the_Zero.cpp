
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    ll xorr = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        xorr ^= x;
    }
    if(n%2==0){
        if(xorr==0){
            cout << 0 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        cout << xorr << endl;
    }
    

 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}