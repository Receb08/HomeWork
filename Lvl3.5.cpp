#include <iostream>
using namespace std;
int main() {
    int i,a,c=0;
    cout<<"Bir ədəd daxil edin :";
    cin>>i;
    while (i>0){
        a=i%10;
        c=c+a;
        i=int(i/10);
    }
    cout<<c;
}