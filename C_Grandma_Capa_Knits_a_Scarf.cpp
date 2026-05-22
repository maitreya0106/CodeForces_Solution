#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cheack(char c, string& s){
    ll l = 0;
    ll r = s.size()-1;
    ll temp = 0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else if(s[l]==c){
            temp++;
            l++;
        }
        else if(s[r]==c){
            temp++;
            r--;
        }
        else{
            temp = -1;
            break;
        }
    }
    return temp;
}

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l = 0;
    ll r = n-1;
    ll c1 = 0;
    ll c2 = 0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else{
            c1 = cheack(s[l],s);
            c2 = cheack(s[r],s);
            break;
        }
    }
    if(c1==-1&&c2==-1) cout << -1 << endl;
    else if(c1==-1||c2==-1){
        if(c1!=-1) cout << c1 << endl;
        if(c2!=-1) cout << c2 << endl;
    }
    else cout << min(c1,c2) << endl;



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
