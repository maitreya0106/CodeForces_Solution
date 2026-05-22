#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int l = a;
    int r = b;
    if(c%2==1){
        l += c/2+1;
        r += c/2;
    }
    else{
        l += c/2;
        r += c/2;
    }
    if(l==r){
        cout << "Second" << endl;
        return;
    }
    if(l>r){
        cout << "First" << endl;
        return;
        
    }
    else{
        cout << "Second" << endl;
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}