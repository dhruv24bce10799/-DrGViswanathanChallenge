#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int k1;
    cin >> k1;
    queue<int> q1;
    for (int i = 0; i < k1; i++) {
        int x;
        cin >> x;
        q1.push(x);
    }
    int k2;
    cin >> k2;
    queue<int> q2;
    for (int i = 0; i < k2; i++) {
        int x;
        cin >> x;
        q2.push(x);
    }
    int fights = 0;
    int max_fights = 1000000;
    while (!q1.empty() && !q2.empty() && fights < max_fights) {
        int c1 = q1.front();
        q1.pop();
        int c2 = q2.front();
        q2.pop();
        fights++;
        if (c1 > c2) {
            q1.push(c2);
            q1.push(c1);
        } else {
            q2.push(c1);
            q2.push(c2);
        }
    }
    if (q1.empty()) {
        cout << fights << " " << 2 << "\n";
    } else if (q2.empty()) {
        cout << fights << " " << 1 << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}
