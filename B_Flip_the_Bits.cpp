#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    vector<bool> canFlip(n,false);
    ll one = 0;
    ll zero = 0;
    for(ll i=0; i<n; i++){
        if(a[i]=='1'){
            one++;
        }
        else{
            zero++;
        }
        if(one==zero){
            canFlip[i]=true;
        }
    }
    bool ans = true;
    bool flip = false;
    for(ll i=n-1; i>=0; i--){
        if(flip==false){
            if(a[i]!=b[i]){
                if(canFlip[i]){
                    flip=true;
                }
                else{
                    ans = false;
                    break;
                }
            }
        }
        else if(flip==true){
            if(a[i]==b[i]){
                if(canFlip[i]){
                    flip = false;
                }
                else{
                    ans = false;
                    break;
                }
            }
        }
    }
    cout << ((ans==true)?"YES":"NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
