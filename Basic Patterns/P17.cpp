#include<iostream>
using namespace std;

void pattern(int n){
    string s = "ABCDEFGHIJKL";
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1; j<=n-i ; j++){
            cout<<" ";
        }
        for(int k=1 ; k<=i-1;k++){
            cout<<s[k-1];
        }
        cout<<s[i-1];
        for(int k=i-1 ; k>=1;k--){
            cout<<s[k-1];
        }

        for(int j = 1; j<=n-i ; j++){
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