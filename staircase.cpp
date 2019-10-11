#include<bits/stdc++.h>
using namespace std;

void staircase(int arr[100][100],int r,int c,int key){
    
     int i=0,j=c-1;
    while(i<r && j>=0){
        if(arr[i][j] == key){
            cout<<i<<" and "<<j<<endl;
            break;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    if(i==r || j<0){
       cout<<"Not found!"<<endl; 
    }
    
    return ;    
}

int main(){
    int r,c;
    cin>>r>>c;
    
    int arr[100][100];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cin>>key;
    
    staircase(arr,r,c,key);
    
    return 0;
   
}
