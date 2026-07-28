#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n;cin>>n;
int val1=0; int val2=0; int val3=0;
for(int i=1;i<=n;i++){
    int arr[3];
    for (int j=0;j<3;j++){
        cin>>arr[j];
        if(j==0){
            val1+=arr[j];
        }else if(j==1){
            val2+=arr[j];
        }else{
            val3+=arr[j];
        }
    }
    
}if(val1==0&&val2==0&&val3==0){
    cout<<"YES";
}else{
    cout<<"NO";
}
}
