#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

// extract the no. or count the digits in a numbers
int extract(int n){
    int count = 0;
    while(n>0){
        int ld;
        ld = n%10;
        cout<<ld<<endl;
        n = n/10;
        cout<<n<<"this is n"<<endl;  

        count+=1;
    }
    return count;

}

// Counting Digit
int nofdigit(int n){
   int num = (int)(log10(n) + 1);
   return num; 
}

// Reverse no.-
int reverseno(int n){
    int rs = 0;
    while(n>0){
        int ld = n%10;
        n = n/10;
        rs = (rs*10)+ld;
    }
    return rs;

}

// Palindrom No. -
int palindromno(int n){
    int rs = 0;
    int dub = n;
    while(n>0){
        int ld = n%10;
        n = n/10;
        rs = (rs*10)+ld;
    } 
    if(dub==rs){
        cout<<"True , this is palindrom";
    }else{
        cout<<"false , this is not palindrom";
    }
    return rs;

}

// Armstrogn No. -
int armstrongno(int n){
    int dub = n;
    int length = to_string(abs(n)).length();
    int arr[] = {};
    for(int i=0 ; n>0 ; i++){
        int d = n%10;
        arr[i] = d;
        n = n/10;
    }
    int r = 0;
    for(int i = 0; i<length; i++){
        cout<<arr[i]<<endl;
        r+=pow(arr[i],length);
    }
    if(dub == r){
        cout<<"This is an armstrong no.";
    }else{
        cout<<"This is not";
    }

    return r;
}

// Print Divisors--
int divisors(int n){
    for(int i= 1 ; i<=n ; i++){
        if(n%i == 0){
            cout<<i<<endl;
        }
    }
    // int num = stoi(s);
    return 0;
}
// string divisors(int n){
//     string s = "";
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             s = s + to_string(i) + " ";
//         }}
//  return s;
// }  ==> Store in a string

int gcd(int n1, int n2){
    int gcdno = 1;
    int n3 = 0;
    if(n1>n2){
        n3=n2;
    }else{
        n3=n1;
    }
    
    for(int i=1 ; i<=n3 ; i++){
        if(n1%i==0 && n2%i==0){
            gcdno=i;
        }
    }
    return gcdno;
    //return __gcd(n1,n2); --> This is an inbuild function in c++.
}

int main(){
// int n;
// cin>>n;
int n1, n2;
cin>>n1>>n2;
//cout<<extract(n);
//cout<<nofdigit(n);
//cout<<reverseno(n);
//cout<<palindromno(n);
//cout<<armstrongno(n);
//cout<<divisors(n);
cout<<gcd(n1,n2);

return 0;
}
