#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);
    for(ll i=0; i < n; i++){
        cin >> a[i];
    }
    ll cnt = 0;
    for(ll i=n-2; i>=0; i--){
        if(a[i+1]>a[i]){
            continue;
        }
        if(a[i+1]==a[i]&&a[i]==0){
            cout << -1 << endl;
            return;
        }
        while(a[i+1]<=a[i]){
            if(a[i]==0){
                cout << -1 << endl;
                return; 
            }
            a[i]/=2;
            cnt++;
        }

    }
    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
