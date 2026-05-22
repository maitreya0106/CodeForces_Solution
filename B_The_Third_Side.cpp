#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> centers(n);
        vector<int> radii(n);
        for (int i = 0; i < n; i++){
            cin >> centers[i];
        }
        for (int i = 0; i < n; i++){
            cin >> radii[i];
        }
        
        // This map will record for each x coordinate the maximum half-length (i.e. floor(sqrt(...)))
        unordered_map<long long, int> best;
        
        // Process each circle
        for (int i = 0; i < n; i++){
            long long cx = centers[i];
            int r = radii[i];
            // x goes from (center - r) to (center + r)
            long long L = cx - r;
            long long R = cx + r;
            for (long long x = L; x <= R; x++){
                int dx = (int)abs(x - cx);
                // Calculate maximum y such that (x - cx)^2 + y^2 <= r^2.
                // It is floor(sqrt(r*r - dx*dx))
                double disc = (double)r * r - (double)dx * dx;
                int d = (int)floor(sqrt(disc));
                // Update the maximum half-length for x.
                if (best.find(x) == best.end())
                    best[x] = d;
                else
                    best[x] = max(best[x], d);
            }
        }
        
        // Now sum over all x values: for a given x, there are 2*d + 1 lattice points (all y in [-d,d]).
        long long answer = 0;
        for (auto &p : best){
            answer += 2LL * p.second + 1;
        }
        
        cout << answer << "\n";
    }
    return 0;
}
