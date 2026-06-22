#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t; // Read the number of test cases
	while (t--) {
		int n;
		cin >> n; // Read the number of elements in the array
		vector<int> a(n); // Initialize a vector to store the array elements
		for (int i = 0; i < n; i++)
			cin >> a[i]; // Read the elements of the array

		map<int, int> mp; // Map to store prime factors and their counts
		for (int i = 0; i < n; i++) { // Iterate over each element in the array
			for (int j = 2; j * j <= a[i]; j++) { // Check for prime factors up to the square root of a[i]
				while (a[i] % j == 0) { // While j is a factor of a[i]
					mp[j]++; // Increment the count of the prime factor j
					a[i] /= j; // Divide a[i] by j to reduce it
				}
			}
			// If a[i] is greater than 1, it is a prime factor itself
			if (a[i] > 1) {
				mp[a[i]]++;
			}
		}

		int flag = 1; // Flag to check if all prime factor counts are divisible by n
		for (auto it : mp) { // Iterate over the map of prime factors
			if (it.second % n != 0) { // If any prime factor count is not divisible by n
				flag = 0; // Set flag to 0 indicating not possible to equalize
				break;
			}
		}

		if (flag) {
			cout << "YES" << endl; // If flag is 1, output YES
		} else {
			cout << "NO" << endl; // Otherwise, output NO
		}
	}
}

// Time Complexity (TC): O(n*root(a[i]))
// Space Complexity (SC): O(n)
