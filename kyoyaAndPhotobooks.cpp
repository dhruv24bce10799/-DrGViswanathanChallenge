#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();
    
    // Formula: 25 * n + 26
    int ans = 25 * n + 26;

    cout << ans << "\n";

    return 0;
}
