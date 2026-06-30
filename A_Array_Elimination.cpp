#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;



void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    vector<ll> bits(31,0);
    for(ll i=0; i<n; i++){
        for(ll si = 0; si<=30; si++){
            if(a[i]&(1<<si)) bits[si]++;
        }
    }
    cout << 1 << ' ';
    for(ll i=2; i<=n; i++){
        bool flag = true;
        for(ll b = 0; b<=30; b++){
            if(bits[b]%i!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << i << ' ';
        }
    }
    cout << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}