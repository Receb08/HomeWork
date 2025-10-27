#include <iostream>
using namespace std;
int main() {
    int i,c=0;
    cout<<"Bir ədəd daxil edin :";
    cin>>i;
    while (i!=0){
        c=c+i;
        cout<<"Ədədləri daxil edin :";
        cin>>i;
    }
    cout<<c;
}