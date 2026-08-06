#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
           
            cout << string(m, '#') << "\n";
        } else {
            if (i % 4 == 2) {
              
                cout << string(m - 1, '.') + "#" << "\n";
            } else {
                
                cout << "#" + string(m - 1, '.') << "\n";
            }
        }
    }

    return 0;
}
