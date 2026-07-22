#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int count=0;
	for(int t=1;t<=n;t++){
	    if(arr[t-1]>=arr[k-1]&&arr[t-1]>0){
	        count++;
	    }
	}cout<<count;
}
