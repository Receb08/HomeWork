#include <iostream>
using namespace std;
int main() {
    int n,c,a=0,b=1,i=1;
    cout<<"Elementlərin sayını daxil edin :";
    cin>>n;
    while (n>=i){
        cout<<a;
        cout<<" ";
        c=a+b;
        a=b;
        b=c;
        i=i+1;
    }
