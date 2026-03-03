#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;
    //true->1 and false->0
    cout<<"logical AND is: "<<(a&&b)<<"\n";
    cout<<"logical OR is: "<<(a||b)<<"\n";
    cout<<"logical NOT is: "<<!(a)<<"\n";

    return 0;
}