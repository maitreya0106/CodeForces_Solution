#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve(){
    ll n;
    cin >> n;
    string s = "";
    vector<char> v={'a','e','i','o','u'};
    ll div = n/5;
    ll rem = n%5;
    for(ll i=0; i<5; i++){
        for(ll j=0; j<div; j++){
            s+=v[i];
        }
        if(rem){
            s+=v[i];
            rem--;
        }

    }
    cout << s << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}