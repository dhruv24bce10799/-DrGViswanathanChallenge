#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n; cin>>n;
int arr[n];
int min=INT_MAX;
int max=INT_MIN;
int store1,store2;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>max){
        max=arr[i];
        store1=i+1;
    }
    if(arr[i]<=min){
        min=arr[i];
        store2=i+1;
    }
}if(store1>store2){
    cout<<abs(n-store2)+abs(store1-1)-1;
}else{
      cout<<abs(n-store2)+abs(store1-1);
}



}
