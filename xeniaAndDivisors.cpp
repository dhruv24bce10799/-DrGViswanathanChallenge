#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> count(8, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    if (count[5] > 0 || count[7] > 0) {
        cout << -1 << "\n";
        return 0;
    }
    
    if (count[1] != n / 3 || 
        count[2] + count[3] != count[1] || 
        count[4] + count[6] != count[1] || 
        count[4] > count[2]) {
        cout << -1 << "\n";
        return 0;
    }

    for (int i = 0; i < count[4]; i++) {
        cout << "1 2 4\n";
    }
    for (int i = 0; i < count[2] - count[4]; i++) {
        cout << "1 2 6\n";
    }
    for (int i = 0; i < count[3]; i++) {
        cout << "1 3 6\n";
    }

    return 0;
}
