#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char cur = s[0];
    ll dif = 1;
    for(ll i=1; i<n; i++){
        if(s[i]!=cur){
            cur = s[i];
            dif++;
        }
    }
    if(dif==n){
        cout << n << endl;
        return;
    }
    if(s[0]==s[n-1]){
        cout << dif << endl;
        return;
    }
    cout << dif+1 << endl;
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}