#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    ll d = y - x;                              
 	ll m = min(k, max(0LL, y - 2 * x + 1));
    ll ans = 0;
    for (ll i = 0; i < m; ++i)
        ans += d % (x + i);

    ans += d * (k - m);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
}

