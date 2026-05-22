#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n+1);
        a[0] = 0;
        for(int i = 1; i < n+1; i++) {
            cin >> a[i];
        }
        int maxp = 0;
        for(int i=0; i<n; i++){
            int temp = a[i+1]-a[i];
            maxp = max(maxp,temp);
        }
        maxp = max(maxp,2*(x-a[n]));
        cout << maxp << endl;
    }
    return 0;
}
