#include<iostream>
using namespace std;


//normal
void print(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    print(i-1,n);

}


//backtracking

void printt(int i, int n){
    if(i>n) return;
    printt(i+1,n);
    cout<<i<<endl;
}


int main(){

    int n=3;
    printt(1,n);

    return 0;
}