#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;
        }
    }
    if(c==1){
        cout<<"BOB"<<endl;
    }
    else if(c%2==0){
        cout<<"BOB"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;}



    
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
