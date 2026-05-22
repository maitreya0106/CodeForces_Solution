#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    // total n over all test cases ≤ 2e5
    while(T--){
        int n;
        cin >> n;

        ll sumZ = 0,  // total zeros we must move
           sumO = 0,  // total ones we must move
           extra = 0; // extra zero‑moves to unblock ones

        vector<ll> a(n), b(n), c(n), d(n);
        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i] >> c[i] >> d[i];
        }

        // First pass: compute sumZ, sumO
        vector<ll> deltaZ(n), deltaO(n);
        for(int i = 0; i < n; i++){
            deltaZ[i] = a[i] - c[i];
            deltaO[i] = b[i] - d[i];
            if(deltaZ[i] > 0) sumZ += deltaZ[i];
            if(deltaO[i] > 0) sumO += deltaO[i];
        }

        // Second pass: for each pile with surplus ones, see how many zeros
        // still block those ones after using up any zeros that we
        // already planned to move (i.e. max(deltaZ[i],0)).
        for(int i = 0; i < n; i++){
            if(deltaO[i] > 0){
                ll zerosAlreadyMoving = max(deltaZ[i], 0LL);
                ll blockersLeft = a[i] - zerosAlreadyMoving;
                if(blockersLeft > 0)
                    extra += blockersLeft;
            }
        }

        cout << (sumZ + sumO + extra) << "\n";
    }
    return 0;
}
