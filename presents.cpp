#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n;cin>>n;
int a[n+1]={0};
int b[n+1]={0};


for(int i=1;i<=n;i++){
    cin>>a[i];
    b[a[i]]=i;
    
}for(int i=1;i<=n;i++){
    cout<<b[i]<<" ";
}cout<<endl;
}
