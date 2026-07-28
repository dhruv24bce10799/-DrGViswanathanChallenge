#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--){
    string s;cin>>s;
    int ans = 0; 
    ans+=min((int)s[0]-'a',26-((int)s[0]-'a')); 
    for(int i=1;i<s.size();i++){
        ans+=min(abs((int)s[i]-s[i-1]),26-abs((int)s[i]-s[i-1]));
    }cout<<ans<<endl;
    } 
    
}
