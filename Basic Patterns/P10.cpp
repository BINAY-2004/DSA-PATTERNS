#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1 ; i<=n ; i++){
        int m = (n+1)/2;
        if(i<=m){
        for(int j = 1; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }else{
        for(int j = 1; j<=n-i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    }
}
int main(){
 int n ;
 // n stand for no. of rows
    cin>>n;
    pattern(n);
return 0;
}