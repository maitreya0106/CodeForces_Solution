#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Check for "baaba" type, it cannot be generated.
    // The pattern must allow for an alternating structure.
    // Specifically, for any two known characters, their 
    // relative distance and values must be consistent with 
    // an alternating sequence.
    
    // A robust approach is to check if it's possible to fill '?'
    // to make it a valid subsequence.
    
    // The only way to fail is if the constraints force a "baaba"
    // like structure.
    
    // Simplified: Check if 'a' and 'b' are placed such that
    // they don't break the alternating pattern.
    
    int last_a = -1, last_b = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            if (last_a != -1 && (i - last_a) % 2 != 0) {
                // Same character too close? No, it's about 
                // the parity of the distance.
            }
            last_a = i;
        } else if (s[i] == 'b') {
            last_b = i;
        }
    }
    
    // The actual condition is that 'a's must be at valid 
    // relative positions and 'b's at valid relative positions.
    // If we have "aa" or "bb", the distance must be even?
    // Not necessarily.
    
    // Let's use the property that 'a's and 'b's must 
    // be 'a' for odd indices, 'b' for even in T, or vice versa.
    
    // Final check for "baaba" is that we can't have a specific
    // sequence of 'a' and 'b' that forces a contradiction.
    // The simplest check is the structure of the string.
    
    // This problem is 2202B, and it often requires checking
    // against specific forbidden substrings or using a
    // constructive approach.
    
    return true; // placeholder
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        // ... call solver
    }
    return 0;
}
