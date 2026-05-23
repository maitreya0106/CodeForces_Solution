#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    cin >> n;
    
    vector<ll>a(n);
    ll maxv = INT_MIN;
    ll pos = -1;
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++){
        if(a[i]>maxv){
            maxv=a[i];
            pos = i;
        }
    }
    bool atodd = false;
    for(ll i=0; i<n; i++){
        if(a[i]==maxv){
            if(i%2==0){
                atodd=true;
                break;
            }
        }
    }
    if(atodd){
        if(n%2){
            cout << maxv+n/2+1 << endl;
            return;
        }
    }
    cout << maxv+n/2 << endl;
}

int main() {
    // Fast I/O
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