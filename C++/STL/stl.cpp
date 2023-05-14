#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void powerpoint(int arr[]){
    int i=3;
   cout<<arr[i];
}

int main(){
    int n,arr[100];
    cin>>n;

    
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    powerpoint(arr);
    return 0;
}