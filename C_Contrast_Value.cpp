#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return b==0?a:gcd(b,a%b);
}


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll con=0;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    for(ll i=1; i<n; i++){
        con+=abs(a[i]-a[i-1]);
    }
    if(con==0){
        cout << 1 << endl;
        return;
    }
    ll state = -1; //up 1 down 0;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        if(i!=0&&a[i]==a[i-1]) continue;
        if(i!=0&&state==-1){
            if(a[i]>a[i-1]) state = 0;
            else if(a[i]<a[i-1]) state = 1;
        }
        if(state!=-1){
            if(state==0&&a[i]<a[i-1]){
                ans++;
                state = 1;
            }
            else if(state==1&&a[i]>a[i-1]){
                ans++;
                state = 0;
            }
        }
    }
    cout << ans+2 << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}