#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;
        int drink = l * k, lemon = d * c;
        int toasts = min(drink / nl, min(lemon, p / np)) / n;
        cout << toasts << endl;
    }
}
