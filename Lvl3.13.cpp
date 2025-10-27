#include <iostream>
using namespace std;
int main() {
    int a,b,c,d=0;
    cout<<"Bir Ədəd daxil edin :";
    cin>>a;
    b=a;
    while (b!=0){
        c=b%10;
        d=d*10+c;
        b=b/10;
    }
if(d==a){
    cout<<"Polindromdur";
    }
else{
    cout<<"Polindrom deyil";
    }
}