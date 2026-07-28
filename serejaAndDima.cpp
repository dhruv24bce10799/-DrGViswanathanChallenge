#define ll long long
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--){
      int n;cin>>n;
      int l=0,r=n-1;
      int a[n];
      ll sum =0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
      }
      ll ans1=0;
      while(l<=r){
        ans1+=max(a[l],a[r]);
        if(a[l]>=a[r])l++;
        else r--;
         if(a[l]>=a[r])l++;
        else r--;
 
      }
      cout<<ans1<<" "<<sum-ans1<<endl;
    } 
    
}
