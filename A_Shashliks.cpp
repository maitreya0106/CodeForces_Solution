#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353


void solve(){
    ll k,a,b,x,y;
    cin >> k >> a >> b >> x >> y;
    pair<ll,ll> fir,sec;
    if(x<y){
        fir.first = a;
        fir.second = x;
        sec.first = b;
        sec.second = y;
    }
    else if(y<x){
        fir.first = b;
        fir.second = y;
        sec.first = a;
        sec.second = x;
    }
    else{
        if(a>b){
            fir.first = a;
            fir.second = x;
            sec.first = b;
            sec.second = y;
        }
        else{
            fir.first = b;
            fir.second = y;
            sec.first = a;
            sec.second = x;
        }
    }
    ll ans = 0;
    if(fir.first<=k){
        ans+=(k-fir.first+1)/fir.second;
        
    }

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