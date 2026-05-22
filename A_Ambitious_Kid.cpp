#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        int n;
        cin >> n ;
        vector<int> a(n);
        
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[i] = abs(x);
        }
        cout << *min_element(a.begin(), a.end()) << endl;



        
    

    return 0;
}