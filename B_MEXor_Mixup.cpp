#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll mex, xo;
    cin >> mex >> xo;
    if(mex==1&&xo==1){
        cout << mex+2 << endl;
        return;
    }
    if(xo<=mex){
        cout << mex << endl;
        return;
    }
    cout << mex+1 << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}