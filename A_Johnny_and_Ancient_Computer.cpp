#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, b;
    cin >> a >> b;
    if(a==b){
        cout << 0 << endl;
        return;
    }
    if(b<a){
        swap(a,b);
    }
    ll cnt = 0;
    while(a<b){
        a = a<<1;
        cnt++;
    }
    if(a!=b){
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    while(cnt){
        if(cnt>=3){
            ans += cnt/3;
            cnt = cnt%3;
        }
        else if(cnt>=2){
            ans += cnt/2;
            cnt = cnt%2;
        }
        else{
            ans += cnt;
            cnt = cnt%1;
        }
    }
    cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}