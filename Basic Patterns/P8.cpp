#include<iostream>
using namespace std;

void pattern(int n){
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
    }
}
int main(){
 int n ;
 // n stand for no. of rows
    cin>>n;
    pattern(n);
return 0;
}