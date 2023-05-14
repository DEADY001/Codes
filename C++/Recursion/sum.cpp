#include<iostream>
using namespace std;

//sum 1 to n
int sum(int n){

    if(n==0)return 0;
    else
    return n + sum(n-1);

}


//factorial 


int factorial(int n){

    if (n==0) return 1;
    else
    return n*factorial(n-1);
}
int main(){
    cout<<sum(5)<<endl;
    cout<<factorial(5);
    return 0;
}