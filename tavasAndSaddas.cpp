#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int len = s.length();
    
  
    int ans = (1 << len) - 2;

    
    int offset = 0;
    for (int i = 0; i < len; i++) {
        offset <<= 1;
        if (s[i] == '7') {
            offset |= 1;
        }
    }

    ans += offset + 1;

    cout << ans << "\n";

    return 0;
}
