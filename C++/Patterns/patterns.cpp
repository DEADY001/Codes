#include<iostream>
using namespace std;

void pattern1( int n){
   
   /* for(int i = 0 ; i<=4;i++){

        for( int j = i ;j <= i;j++){
        cout<<"****"<<endl;
        }
    }*/

    for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<n; j++){

            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i = 0; i<=n;i ++){
        for(int j=0; j<i; j++){
            cout<<"*";

    }
    cout<<endl;
}

}

void pattern3(int n){
     for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<=i; j++){

            cout<<j+1;
        }
        cout<<endl;
    }
}


void pattern4(int n){
     for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<=i; j++){

            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}



void pattern5(int n){
     for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<n-i; j++){

            cout<<"*";
        }
        cout<<endl;
    }
}




void pattern6(int n){
     for(int i = 0 ; i<n;i++){
        for(int j =0 ; j<n-i; j++){

            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern7(int n){
     for(int i = 0 ; i<n;i++){

        //space
        for(int j =0 ; j<n-i; j++){

            cout<<" ";
        }

        //star
        for(int j = 0; j<2*i+1; j++){

            cout<<"*";
        }
        //space
         for(int j =0 ; j<n-i; j++){

            cout<<" ";
        }
     cout<<endl;
    }
}


void pattern8(int n){

     for(int i = 0 ; i<n;i++){

        //space
        for(int j =0 ; j<i; j++){

            cout<<" ";
        }

        //star
        for(int j = 0; j<2*(n-i-1)+1; j++){

            cout<<"*";
        }
        //space
         for(int j =0 ; j<i; j++){

            cout<<" ";
        }
     cout<<endl;
    }
}


void pattern9(int n){
    for(int i=0; i<=2*n-1;i++){

        int stars=i;

        if(i>n)
        stars=2*n-i;

        for(int j =0; j<stars;j++){

            cout<<"*";
        }
        cout<<endl;


    }


}


void pattern10(int n){

    for(int i=0;i<=n;i++){

        int start= 1;
        if(i%2==0) start=1;
        else start=0;


        for(int j=0;j<=i;j++){

            cout<<start<<" ";
            start=1- start;
        }
        cout<<endl;
    }    
}


void pattern11(int n){
    int space=2*(n-1);
    for(int i =0 ; i<n;i++){
        //number
        for(int j=0;j<i;j++){
            cout<<j;
        }
        //space
        space=space-i;
        for(int j=0;j<space;j++){
            cout<<" ";
            
        }

        //number
        for(int j=i;j>0;j--){

            cout<<j;
        }
       cout<<endl;
      //space-=2;
    }

}


void pattern12(int n){
    int start=1;
    for(int i =1; i<n;i++){
            for(int j =0; j<i;j++){
                cout<<start<<" ";
                start++;
            }
    cout<<endl;
    }
}


void pattern13(int n){
    for(int i =0; i<n;i++){
        for(char ch='A'; ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i =0; i<n;i++){

        for(char ch='A';ch<'A'+n-i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}


void pattern15(int n){
    for(int i =0; i<n;i++){

        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }

}

void pattern16(int n){
    for(int i = 0 ; i<n;i++){

        //space
        for(int j =0 ; j<n-i; j++){

            cout<<" ";
        }

        //char
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<2*i+1;j++){
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;

        }
        //space
         for(int j =0 ; j<n-i; j++){

            cout<<" ";
        }
     cout<<endl;
    }
}



void pattern17(int n){
    for(int i=0; i<n;i++){
        
        int k= i;
        for(int j=0; j<=i;j++){
            char ch='E'-k;
            cout<<ch<<" ";
            k--;
        }
        cout<<endl;

    }
}


void pattern18(int n){

     int space=0;
    for(int i=0;i<n;i++){
        
        //star
        for(int j=0; j<n-i;j++){
            cout<<"*";
        }

        //space

        for(int j=0; j<space;j++){
            cout<<" ";

        }

        //star

        for(int j=0; j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
        space +=2;
    }
        space = 8;
    for(int i=0;i<n;i++){
        
        //star
        for(int j=0; j<=i;j++){
            cout<<"*";
        }

        //space

        for(int j=0; j<space;j++){
            cout<<" ";

        }

        //star

        for(int j=0; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        space -=2;
    }
}

void pattern19(int n){
    int space=2*n-2;
    for(int i=1;i<2*n-1;i++){
        
        int stars=i;
        if(i>n)stars=2*n-i;
        //starts

        for(int j=1; j<stars;j++){
            cout<<"*";

        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<stars;j++){
            cout<<"*";

        }
        if(i<n)space -=2;
        else space +=2;
        cout<<endl;

    }

}


void pattern20(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pattern20(n);

    return 0;
}

