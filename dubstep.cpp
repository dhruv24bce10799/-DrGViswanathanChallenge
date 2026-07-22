#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool wordPrinted = false;
    bool spacePrinted = false;

    for (int i = 0; i < s.size();) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            if (wordPrinted && !spacePrinted) {
                cout << " ";
                spacePrinted = true;
            }
            i += 3;
        } else {
            cout << s[i];
            wordPrinted = true;
            spacePrinted = false;
            i++;
        }
    }

    return 0;
}
