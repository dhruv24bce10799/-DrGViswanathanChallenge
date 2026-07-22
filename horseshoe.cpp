#define ll long long 
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

   bool check=true;
   ll a[4];
   cin>>a[0]>>a[1]>>a[2]>>a[3];
   sort(a,a+4);
   int cnt=0;
   for(int i=1;i<4;i++){
    if(a[i]==a[i-1]){
        cnt++;
    }
   }cout<<cnt<<endl;
   
    
    
}
