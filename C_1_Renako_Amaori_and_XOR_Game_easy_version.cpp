#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++) cin >> b[i];
    ll ah = count(a.begin(),a.end(),1);
    ll bh = count(b.begin(),b.end(),1);
    for(ll i=0; i<n; i++){
        if(a[i]==b[i]) continue;
        if(i%2==0){
            if(ah%2==0){
                if(a[i]==1){
                    ah--;
                    bh++;
                }
                else{
                    ah++;
                    bh--;
                }
            }
        }
        else{
            if(bh%2==0){
                if(b[i]==1){
                    bh--;
                    ah++;
                }
                else{
                    bh++;
                    ah--;
                }
            }
        }
    }
    if((ah%2==0&&bh%2==0)||(ah%2==1&&bh%2==1)){
        cout << "Tie" << endl;
    }
    else if(ah%2==0){
        cout << "Mai" << endl;
    }
    else{
        cout << "Ajisai" << endl;
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