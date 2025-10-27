#include <iostream>
using namespace std;
int main() {
    int i,c=0;
    cout<<"Bir ədəd daxil edin :";
    cin>>i;
    for(1;i>0;--i){
        c=c+i;
    }
    cout<<c;
}