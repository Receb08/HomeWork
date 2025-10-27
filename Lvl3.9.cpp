#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,c=0;
    cout<<"Bir ədəd daxil edin :";
    cin>>n;
    for(int i=2;i<n;++i){
        if (n%i==0){
            c=c+1;
            }
        }
    if (c==0){
        cout<<"Ədəd sadədir";
        }
    else{
        cout<<"Ədəd mürəkkəbdir";
        }
}