#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n;
cin>>n;
int x=0;
for(int i=1;i<=n;i++){
   string s;
   cin>>s;
   if(s=="X++"){
      
           x+=1;
    
   }else if(s=="X--"){
       
           x-=1;
       }else if(s=="++X"){
           x+=1;
       }else if(s=="--X"){
           x-=1;
       }
   
}cout<<x;


}
