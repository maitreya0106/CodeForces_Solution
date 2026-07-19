#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k, m;
    cin >> n >> k >> m;
    if(k>m){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(ll i=0; i<n; i++){
        if(k==1){

            cout << m-i << ' ';
            k=0;
        }
        else if(k--){
            cout << 1 << ' ';
        }
        else{
            cout << 1 << ' ';
        }
    }
    cout << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
