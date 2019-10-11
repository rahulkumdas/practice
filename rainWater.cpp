#include<bits/stdc++.h>
using namespace std;
long long int arr[100005],leftcsum[1000005],rightcsum[1000005];

int main(){
    int test;
    cin>>test;
    
    while(test--){
        
        int n;
        cin>>n;
        
        
        int i=0;
        cin>>arr[i];
        leftcsum[i] = arr[i];
        
        for(i=1; i<n; i++){
            cin>>arr[i];
            leftcsum[i] = max(arr[i],leftcsum[i-1]);
        }
        
        rightcsum[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--){
            rightcsum[i] = max(arr[i],rightcsum[i+1]);
        }
        
        int sum=0;
        for(int i=0; i<n; i++){
            sum = sum + min(leftcsum[i],rightcsum[i]) - arr[i];
        }
        
        cout<<sum<<endl;
    }
}
