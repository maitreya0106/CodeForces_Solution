#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


ll f(ll x){
    ll c = 0;
    while(x>0){
        ll b = x%10;
        if(b==0) c++;
        else break;
        x/=10;
    }
    return c;
}


void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> zero;
    ll nonzero = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        ll cnt = f(x);
        zero.push_back(cnt);
        nonzero+=to_string(x).size()-cnt;
    }
    sort(zero.rbegin(),zero.rend());
    ll sum = nonzero;
    for(ll i=1; i<n; i+=2){
        sum+=zero[i];
    }
    if(sum<=m){
        cout << "Anna\n";
    }
    else{
        cout << "Sasha\n";
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