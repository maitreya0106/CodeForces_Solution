#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll one = 0;
    ll zero = 0;
    for(auto ch: s){
        if(ch=='1') one++;
        else zero++;
    }
    if(one%2==0){
        cout << one << endl;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'){
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
    else if(zero%2!=0){
        cout << zero << endl;
        for(ll i=0; i<n; i++){
            if(s[i]=='0'){
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }

    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}