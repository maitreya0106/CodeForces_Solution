#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        if (n == 1) {
            if (x == 0) cout << -1 << '\n';
            else cout << x << '\n';
        } else if (n == 2) {
            if (x == 0) cout << -1 << '\n';
            else cout << x + 2 << '\n';
        } else {
            cout << x + n << '\n';
        }
    }

    return 0;
}
