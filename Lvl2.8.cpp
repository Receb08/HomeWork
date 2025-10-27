#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Ili daxil edin :";
    cin>>a;
    if ((a%4==0 && a%100!=0)||(a%400==0)){
        cout<<"Bu il tam ildir";
        }
    else{
        cout<<"Bu il tam ild deyil";
        }
}