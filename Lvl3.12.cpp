#include <iostream>
using namespace std;
int main() {
    int a,b,i=1;
    cout<<"Bir Ədəd daxil edin :";
    cin>>a;
    for (i;a>=i;++i){
        if(a%i==0){
            cout<<i<<endl;
        }
    }
}