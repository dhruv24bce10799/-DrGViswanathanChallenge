#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    long long min_val = *min_element(b.begin(), b.end());
    long long max_val = *max_element(b.begin(), b.end());
    long long diff = max_val - min_val;
    long long count_min = 0, count_max = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == min_val) count_min++;
        if (b[i] == max_val) count_max++;
    }
    long long ways;
    if (min_val == max_val) {
        ways = (long long)n * (n - 1) / 2;
    } else {
        ways = count_min * count_max;
    }
    cout << diff << " " << ways << "\n";
    return 0;
}
