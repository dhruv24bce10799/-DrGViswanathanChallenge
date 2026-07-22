#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n;cin>>n;
int a[n+1]={0};
int p;cin>>p;
int b[p];
int sum=0;
for(int i=0;i<p;i++){
    cin>>b[i];
    a[b[i]]=1;
}int q;cin>>q;
int c[q];
for(int i=0;i<q;i++){
    cin>>c[i];
    a[c[i]]=1;
}for(int i=0;i<=n;i++){
    sum+=a[i];
}if(sum==n){
    cout<< "I become the guy."<<endl;
}else{
    cout<<"Oh, my keyboard!"<<endl;
}
}
