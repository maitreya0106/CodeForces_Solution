#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

ll memo[40005][500];


ll f(ll con, ll base, ll& a, ll& b, vector<ll>& vec){
    if(con==vec.size()){
        return 0;
    }
    ll dontShift = b*abs(vec[con]-vec[base])+f(con+1,base,a,b,vec);
    ll shift = INT_MAX;
    if(con>=base){
        shift = a*abs(vec[con]-vec[base])+f(con,con,a,b,vec);
    }
    return min(shift,dontShift);
}

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> vec(n+1);
    vec[0]=0;
    for(ll i=1; i<=n; i++) cin >> vec[i];
    cout << f(1,0,a,b,vec) <<'\n';

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
   \
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}