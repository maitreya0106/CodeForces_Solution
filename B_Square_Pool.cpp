#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, s;
    cin >> n >> s;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll dirx,diry, x, y;
        cin >> dirx >> diry>> x>> y;
        if(x==y){
            if(s%2==0&&x==s/2){
                ans++;
                continue;
            }
            if((dirx==-1&&diry==-1)||(dirx==1&&diry==1)){
                ans++;
            }
        }
        else if(x+y==s){
            if((dirx==1&&diry==-1)||(dirx==-1&&diry==1)){
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    if(cin >> t){
        while(t--){
            solve();
        }
    }
    return 0;
}