#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) {
      int n,m;cin>>n>>m;
      int p = n*m;
      if(p%2){
         cout<<(p+2)/2<<endl;
      }else cout<<p/2<<endl;


    }
}
