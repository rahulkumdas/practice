#include<bits/stdc++.h>
using namespace std;

int main(){

    int *var = new int;
    cin>>*var;

    cout<<*var<<endl;

    int *arr = new int[100];
    int num;
    cin>>num;

    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    for(int i=0; i<num; i++){
       cout<<arr[i]<<" "; 
    }

    delete var; 
}
