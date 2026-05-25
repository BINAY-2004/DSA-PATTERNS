#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = n ; i>=1 ; i--){

        for(int k = i ; k>=1 ; k--){
            cout<<" * ";
        }
        for(int j = 1; j<=(n-i)*2 ; j++){
            cout<<"   ";
        }
        for(int k = i ; k>=1 ; k--){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i = 1 ; i<=n-1 ; i++){
        for(int m = 1 ; m<=i+1 ; m++){
         cout<<" * ";
        } 
        for(int l = 1 ; l<=(n-(i+1))*2 ; l++){
            cout<<"   ";
        }
        for(int m = 1 ; m<=i+1 ; m++){
         cout<<" * ";
        } 
        cout<<endl;
    }
}
int main(){
 int n ;
 // n stand for no. of rows
    cin>>n;
    pattern(n);
return 0;
}