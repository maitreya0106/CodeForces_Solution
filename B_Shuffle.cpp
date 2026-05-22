#include <bits/stdc++.h>
using namespace std;
#define ll long long


#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x, m;
    cin >> n >> x >> m;
    ll ans = 0;
    ll l = x;
    ll r = x;
    for(ll i=0; i<m; i++){
        ll fir;
        ll sec;
        cin >> fir >> sec;
        if(l>=fir&&r<=sec){
            l = fir;
            r = sec;
        }
        else if(fir>=l&&fir<=r){
            if(sec>r)r=sec;
        }
        else if(sec<=r&&sec>=l){
            if(fir<l)l = fir;
        }
    }
    cout << r-l+1 << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}