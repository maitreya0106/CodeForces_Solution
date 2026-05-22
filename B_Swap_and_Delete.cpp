\
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}








void solve() {
    string s;
    cin >> s;
    ll z = 0;
    ll o = 0;
    for(char c:s){
        if(c == '0') {
            z++;
        } else {
            o++;
        }
    }
    ll i;
    for(i=0; i<s.size(); i++){
        if(s[i]=='0'){
            if(o==0){
                break;
            }
            o--;
        }
        else if(s[i]=='1'){
            if(z==0){
                break;
            }
            z--;
        }
    }
    cout << s.size() - i << "\n";
    

    
    

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
