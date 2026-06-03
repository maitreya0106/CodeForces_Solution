#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;


void solve(){

    string s;
    cin >> s;
    ll cnt = 0;
    ll p = 1;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='a') cnt++;
        else if(s[i]=='b'){
            p = (p*(cnt+1))%MOD;
            cnt=0;
        }
    }
    p = (p*(cnt+1))%MOD;
    p = (p-1+MOD)%MOD;
    cout << p << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}