#include<bits/stdc++.h>
using namespace std;
#define ll long long



vector<ll>p2(19),p5(19);

void solve() {
    ll n, m;
    cin >> n >> m;
    ll c2=0;
    ll c5=0;
    ll temp = n;
    while(temp%2==0){
        c2++;
        temp/=2;
    }
    temp = n;
    while(temp%5==0){
        c5++;
        temp/=5;
    }
    for(ll dig = 18; dig>=0; dig--){
        ll r2 = max(0LL,dig-c2);
        ll r5 = max(0LL,dig-c5);
        ll num = p2[r2]*p5[r5];
        if(num<=m){
            ll t = m-m%num;
            cout << n*t << '\n';
            return;
        }
    }
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    p2[0]=1;
    p5[0]=1;
    for(ll i=1; i<=18; i++){
        p2[i]=2*p2[i-1];
        p5[i]=5*p5[i-1];
    }


    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}