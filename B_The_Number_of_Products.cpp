#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll neg = 0;
    ll ansn = 0;
    ll o = 0;
    ll e = 0;
    for(ll i=0; i<n; i++){
        if(a[i]>0){
            if(neg%2==0){
                o++;
            }
            else{
                e++;
            }
        }
        else{
            neg++;
        }
    }

    
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
        solve();
    
    return 0;
}