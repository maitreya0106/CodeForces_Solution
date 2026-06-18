#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    cout.flush();
    for(ll i=1; i<2*n; i+=2){
        cout << "? " << i << ' ' << i+1 << endl;
        cout.flush();
        ll x;
        cin >> x;
        if(x==1){
            cout << "! " << i << endl;
            return;
        }
    }
    ll x;
    cout << "? "<< 1 << ' ' << 3 << endl;
    cout.flush();
    cin >> x;
    if(x==1){
        cout << "! " << 1 << endl;
    }
    else{
        cout << "! " << 2 << endl;
    }

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }



    
    return 0;
}