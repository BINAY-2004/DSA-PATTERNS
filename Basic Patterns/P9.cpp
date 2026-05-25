#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1 ; i<=n ; i++){
    for(int r=1; r<=n-i ; r++){
        cout<<" ";
    }
    for(int j=1 ; j<= 2*i-1 ; j++){
        cout<<"*";
    }
    for(int k=1; k<=n-i ; k++){
        cout<<" ";
    };
    cout<<endl;
}
   
    for(int i = n ; i>=1 ; i--){
        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int j = 1; j<=2*i-1 ; j++){
            cout<<"*";
        }
        for(int j=1 ; j<=n-i ; j++){
            cout<<" ";
        }
        cout<<endl;
    }}



int main(){
 int n ;
 // n stand for no. of rows
    cin>>n;
    pattern(n);
return 0;
}