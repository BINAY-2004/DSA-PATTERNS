#include<iostream>
using namespace std;

void pattern(int n){
    string s = "ABCDEFGHIJKL";
    for(int i = 1 ; i<=n ; i++){
        for(int j = 0; j<i ; j++){
            cout<<s[i-1];
        }
        cout<<endl;
    }
}
int main(){
 int n;
 // n stand for no. of rows
    cin>>n;
    pattern(n);
return 0;
}