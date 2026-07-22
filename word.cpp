#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
string s;cin>>s;
int lowercase=0,uppercase=0;
for(int i=0;i<s.size();i++){
    
if(s[i]>='a'&&s[i]<='z'){
    lowercase++;
}else{
   uppercase++; 
}
}if(uppercase>lowercase){
    for(int i=0;i<s.size();i++){
        s[i]= toupper(s[i]);
    
    }cout<<s;
}else{
    for(int i=0;i<s.size();i++){
        s[i]= tolower(s[i]);
    
    }cout<<s;
    
}
}
