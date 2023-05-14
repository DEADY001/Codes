#include<iostream>
using namespace std;

//backtracking
void print(int i, int n){
    if(i<1)return;
    print(i-1,n);
    cout<<i<<endl;
}

//normal recusrion
void printt(int i, int n){
    if(i>n)return;
    cout<<i<<endl;
    printt(i+1,n);

}

int main(){

    int n=3;
    printt(1,n);
    return 0;
}