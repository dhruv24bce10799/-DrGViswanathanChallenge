#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
for(int i=1;i<6;i++){
    int arr[5];
    for(int j=0;j<5;j++){
        cin>>arr[j];
        if(arr[j]==1&&i>3&&j>2){
            cout<<j-2+i-3;
        }else if(arr[j]==1&&i<=3&&j>=2){
            cout<<j-2+3-i;
        }else if(arr[j]==1&&i>=3&&j<=2){
            cout<<2-j+i-3;
        }else if(arr[j]==1&&i<3&&j<2){
            cout<<2-j+3-i;
        }
    }
}
}
