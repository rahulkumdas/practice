#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cs=0,ms=0;
    cin>>n;
    int a[1000];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n; i++){
        cs  += a[i];
        if(cs<0){
            cs=0;
        }
        ms = max(cs,ms);
    }
    cout<<ms<<endl;
    
    return 0;
}
