#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<j;
        }
        // for(int j = 1; j<=n-i ; j++){
        //     cout<<" ";
        // }
        // for(int j = 1; j<=n-i ; j++){
        //     cout<<" ";
        // } -- No need to re-write code

        for(int j = 1; j<=(n-i)*2 ; j++){
            cout<<" ";
        }
        for(int j = i; j>=1 ; j--){
            cout<<j;
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