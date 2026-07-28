#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--){
      int n,m,a,b;cin>>n>>m>>a>>b;
      ll ans = 0;
      while(n>0){
          if(n>=m){
             ans+=min(b,a*m);
             n-=m;
          }else{
            ans+=min(b,a*n);
            n=0;
          }
      }
      cout<<ans<<endl;
    } 
    
}
