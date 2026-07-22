#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--){
      string s , s1;
      cin>>s>>s1;
      int ans = 0 ; 
      for(int i=0;i<s.size();i++){
        int x,y;
        if(s[i]<'a'){
            x=(int)(s[i]-'A');
        }else{
            x=(int)(s[i]-'a');
        }

        if(s1[i]<'a'){
            y=(int)(s1[i]-'A');
        }else{
            y=(int)(s1[i]-'a');
        }

        if(x>y){
            ans=1;break;
        }else if(x<y){
            ans=-1;break;
        }
      }
      cout<<ans<<endl;

    } 
    
}
