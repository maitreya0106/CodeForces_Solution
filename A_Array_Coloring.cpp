#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int co = 0;
    for(int i=0; i < n; i++) {
        int x;
        cin >> x;
        if(x%2==1){
            co++;
        }
    }
    if(co%2==1){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
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