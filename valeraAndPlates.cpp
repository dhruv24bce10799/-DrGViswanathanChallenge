#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    int wash_count = 0;

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            if (m > 0) {
                m--;
            } else {
                wash_count++;
            }
        } else { // type == 2
            if (k > 0) {
                k--;
            } else if (m > 0) {
                m--;
            } else {
                wash_count++;
            }
        }
    }

    cout << wash_count << "\n";

    return 0;
}
