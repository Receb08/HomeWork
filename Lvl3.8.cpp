#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i,a,t=0;
    cout<<"Bir ədəd daxil edin :";
    cin>>i;
    for(i;i>0;i=i/10){
        a=i%10;
        t=t*10+a;
    }
    cout<<t;
}