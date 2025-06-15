#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i = 0; i<=n; i++){
        for(int j=0 ; j<=n ; j++){
        cout<<" * ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i = 1 ; i<=n ; i++){
        for(int j =0; j<=n-i ; j++){
            cout<<"  *";
        }
        cout<<endl;
    }
}
void pattern3(int n){

    for(int i =0; i<=n; i++){
        for(int j= 0;j<=n-i; j++){
            cout<<" ";
        }
        for(int k=0 ; k<=2*i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0; i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int k = 0 ; k<=2*i-2; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k = 0 ; k<=2*n-(2*i+2); k++){
            cout<<"*";
        }
        cout<<endl;
    }
   
}
void pattern5(int n){
   
    for(int i=0; i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k = 0 ; k<=2*n-(2*i+2); k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int k = 0 ; k<=2*i-2; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n)
int main(){
    int n;
    cout<<"Enter the no of row and colum you want "<<endl;
    cin>>n;
    pattern5(n);
    return 0;
}