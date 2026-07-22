#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	int n=0;
	for(int i=1;i<=t;i++){
	    cin>>a>>b>>c;
	    if(a+b+c>=2){
	        n++;
	    }
	}
cout<<n;
}
