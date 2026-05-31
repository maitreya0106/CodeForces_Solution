#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n , x , s;
    cin >> n >> x >> s;
    ll emp = x;
    ll ae = 0;
    ll ai = 0;
    ll par = 0;
    string st;
    cin >> st;
    ll ans = 0;
    for(auto ch: st){
        if(ch=='I'){
            if(emp>0){
                emp--;
                par += s-1;
                ans++;
            }
            else if(ai>0&&par>=s){
                ai--;
                ae++;
                par--;
                ans++;
            }
        }
        else if(ch=='E'){
            if(par>0){
                par--;
                ans++;
            }
            else if(ae>0&&emp>0){
                ae--;
                ai++;
                emp--;
                par+=s-1;
                ans++;
            }
        }
        else{
            if(par>0){
                par--;
                ae++;
                ans++;
            }
            else if(emp>0){
                emp--;
                par+=s-1;
                ai++;
                ans++;
            }
        }
        
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