#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long odd = 0, mod0 = 0, mod2 = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if (x & 1) odd++;
            else if (x % 4 == 0) mod0++;
            else mod2++;
        }
        cout << max({odd, mod0, mod2}) << '\n';
    }
    return 0;
}
