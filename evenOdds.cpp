#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
long long int n;cin>>n;
long long int k;cin>>k;
if(n%2==0){
    if(k<=(n/2)){
        cout<<2*k-1;
    }else{
        cout<<(k-(n/2))*2;
    }
}else{
    if(k<=((n/2)+1)){
        cout<<2*k-1;
    }else{
        cout<<(k-((n/2)+1))*2;
    }
}
}
