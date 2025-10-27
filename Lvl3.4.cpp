#include <iostream>
using namespace std;
int main() {
    int i,f=1;
    cout<<"Bir ədəd daxil edin :";
    cin>>i;
    for (1;i>=1;--i){
        f=f*i;
    }
    cout<<f;    
}