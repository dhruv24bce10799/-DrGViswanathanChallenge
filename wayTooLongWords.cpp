#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
   int  store=s.size();
   if(store>10){
    cout<<s[0]<<store-2<<s[store-1]<<endl;
   }else{
       cout<<s<<endl;
   }
}
}
