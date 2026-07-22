#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n;cin>>n;
int a[n];
int sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}double s=double(sum)/n;
cout<<s<<endl;
}
