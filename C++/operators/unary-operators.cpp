#include<iostream>
using namespace std;
int main(){
    cout<<"Unary Operators\n";
    int a=10;
//post-increment
// a=10
    int b=a++; // kaam -> update
    cout<<"b: "<<b<<"\n"; //11
    cout<<"a: "<<a<<"\n"; //11
//pre-increment
// a=11
    int c=++a; //update -> kaam
    cout<<"c: "<<c<<"\n"; //12
    cout<<"a: "<<a<<"\n"; //12
//post-decrement
// a=12
    int d=a--; // kaam -> update
    cout<<"d: "<<d<<"\n"; //12  
    cout<<"a: "<<a<<"\n"; //11
//pre-decrement
// a=11
    int e=--a; //update -> kaam
    cout<<"e: "<<e<<"\n"; //10
    cout<<"a: "<<a<<"\n"; //10  

    return 0; 
}