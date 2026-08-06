#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    size_t pos = s.find('0');
    if (pos != string::npos) {
        s.erase(pos, 1);
    } else {
        s.pop_back();
    }
    cout << s << "\n";
    return 0;
}
