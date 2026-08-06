#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool ok = true;
    if (s[0] != '1') ok = false;
    for (char c : s) {
        if (c != '1' && c != '4') ok = false;
    }
    if (s.find("444") != string::npos) ok = false;
    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
