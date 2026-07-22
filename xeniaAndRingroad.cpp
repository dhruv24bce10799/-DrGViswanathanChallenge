#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long curr = 1;
    long long ans = 0;

    while (m--) {
        long long next;
        cin >> next;

        if (next >= curr)
            ans += next - curr;
        else
            ans += (n - curr) + next;

        curr = next;
    }

    cout << ans << endl;

    return 0;
}
