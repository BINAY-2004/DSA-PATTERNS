#include<iostream>
using namespace std;

void pattern(int n){
    string s= "ABCDE";
    for(int i = n ; i>=1 ; i--){
        for(int j = i; j<=n ; j++){
            cout<<s[j-1];
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