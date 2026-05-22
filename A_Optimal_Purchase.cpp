#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = 0;
    if(n>2){
        if(a*3>b){
            ans += (n/3)*b;
            n = n%3;
        }
        else{
            ans += n*a;
            cout << ans << endl;
            return;
        }
    }
    
    if(n==1&&a>b){
        ans += b;
    }
    else if(n==2&&a*2>b){
        ans+=b;
    }
    else{
        ans+=a*n;
    }
    cout << ans << endl;
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}