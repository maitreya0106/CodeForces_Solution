#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ArrayToRearrange(n);
    for (int i = 0; i < n; i++) {
        cin >> ArrayToRearrange[i];
    }
    
    // Sort the array to easily extract elements in ascending order
    sort(ArrayToRearrange.begin(), ArrayToRearrange.end());
    int M = ArrayToRearrange.back();
    
    // Remove exactly one instance of the maximum element 'M'
    bool removed_M = false;
    vector<int> remaining;
    for (int i = 0; i < n; i++) {
        if (!removed_M && ArrayToRearrange[i] == M) {
            removed_M = true;
        } else {
            remaining.push_back(ArrayToRearrange[i]);
        }
    }
    
    vector<int> opt;
    opt.push_back(M); // Place the maximum element at the front
    
    int target = 0;
    vector<int> left_over;
    
    // Greedily place 0, 1, 2, 3... to increase the MEX as fast as possible
    for (int i = 0; i < remaining.size(); i++) {
        if (remaining[i] == target) {
            opt.push_back(remaining[i]);
            target++;
        } else {
            left_over.push_back(remaining[i]);
        }
    }
    
    // Append all duplicates or remaining larger elements at the end
    for (int x : left_over) {
        opt.push_back(x);
    }
    
    // Simulate to calculate the total sum
    long long ans = 0;
    long long current_max = -1;
    int current_mex = 0;
    
    // A boolean array to track the elements we have seen so far
    vector<bool> present(n + 2, false);
    
    for (int i = 0; i < n; i++) {
        int x = opt[i];
        
        // We only care about numbers up to n + 1 for MEX calculation
        if (x <= n + 1) {
            present[x] = true;
        }
        
        // Advance current_mex as far as possible
        while (present[current_mex]) {
            current_mex++;
        }
        
        current_max = max(current_max, (long long)x);
        ans += current_max + current_mex;
    }
    
    cout << ans << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    if (std::cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}