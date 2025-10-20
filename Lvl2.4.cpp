#include <iostream>
using namespace std;
int main() {
    int a; 
    cout<<"Bir ədəd daxil edin :";
    cin>>a;
    if(a!=0)
        if(a%2==0)
           cout<<"Ədəd cütdür";
       else
           cout<<"Ədəd təkdir";
    else
        cout<<"Ədəd 0 dır";
}
