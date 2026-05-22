#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    if(n%2!=0||n<4){
        cout << -1 << endl;
        return;
    }
    ll minval = -1;
    ll maxval = -1;
    if(n%6==0){
        minval = n/6;
    }
    else if(n%6==2||n%6==4){
        minval = (n/6) + 1;
    }

    if(n%4==0){
        maxval = n/4;
    }
    else if(n%4==2){
        maxval = n/4;
    }
    if (minval == -1 || maxval == -1) {
        cout << -1 << endl;
    } else {
        cout << minval << " " << maxval << endl;
    }

    

    
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
