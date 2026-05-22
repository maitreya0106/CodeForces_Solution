#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    vector<ll> l(3),b(3);
    for(ll i=0; i<3; i++){
        cin >> l[i];
        cin >> b[i];
    }

    if(l[0]==l[1]&&l[1]==l[2]){
        if(b[0]+b[1]+b[2]==l[0]){
            cout << "YES" << endl;
            return;
        }

    }
    if(b[0]==b[1]&&b[1]==b[2]){
        if(l[0]+l[1]+l[2]==b[0]){
            cout << "YES" << endl;
            return;
        }

    }
    if((l[0]==l[1]+l[2])&&b[1]==b[2]){
        if(l[0]==b[0]+b[1]){
            cout << "YES" << endl;
            return;
        }

    }
    if((b[0]==b[1]+b[2])&&l[1]==l[2]){
        if(b[0]==l[0]+l[1]){
            cout << "YES" << endl;
            return;
        }

    }
    cout << "NO" << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    if(cin >> t){
        while(t--){
            solve();
        }
    }
    return 0;
}