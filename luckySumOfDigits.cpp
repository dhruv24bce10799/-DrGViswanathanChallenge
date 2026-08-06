#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int count7 = -1, count4 = -1;
    for (int c7 = n / 7; c7 >= 0; c7--) {
        int rem = n - 7 * c7;
        if (rem % 4 == 0) {
            count7 = c7;
            count4 = rem / 4;
            break;
        }
    }
    if (count7 == -1) {
        cout << -1 << "\n";
    } else {
        cout << string(count4, '4') + string(count7, '7') << "\n";
    }
    return 0;
}
