#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i+i-1 ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
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
}
int main(){
 int n ;
 // n stand for no. of rows
    cin>>n;
    //pattern1(n);
    pattern2(n);
return 0;
}