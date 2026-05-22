
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll x,k;
    cin >> x >> k;
    if(x<k){
        cout << 1 << endl;
        cout << x << endl;
        return;

    }
    if(x%k!=0){
        cout << 1 << endl;
        cout << x << endl;
    }
    else{
        cout << 2 << endl;
        cout << x-1 << " " << 1 << endl;
    }
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}