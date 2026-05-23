#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

ll memo[40005][500];
vector<ll> pali;

bool isPali(ll num){
    ll rev = 0;
    ll temp = num;
    while(num){
        rev =(10*rev)+(num%10);
        num/=10;
    }
    return temp==rev;
}

ll f(ll num, ll ind){
    if(num==0){
        return 1;
    }
    if(num<0||ind>=pali.size()){
        return 0;
    }
    if(memo[num][ind]!=-1) return memo[num][ind];
    ll ways = 0;
    if(num>=pali[ind]){
        ways = (ways+f(num-pali[ind],ind))%MOD;
    }
    ways = (ways+f(num,ind+1))%MOD;
    return memo[num][ind]=ways;
}

void solve() {
    ll n;
    cin >> n;
    cout << f(n,0) << '\n';

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    for(ll i=1; i<=40000; i++){
        if(isPali(i)){
            pali.push_back(i);
        }
    }
    memset(memo,-1,sizeof(memo));
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}