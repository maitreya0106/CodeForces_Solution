#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        // If either dimension is 1, there's only one path,
        // which must be both greedy and maximum → impossible.
        if (n == 1 || m == 1) 
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
