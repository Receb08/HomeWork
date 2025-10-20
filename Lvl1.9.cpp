#include <iostream>
using namespace std;
int main(){
    int san,dəq,saat;
    cout<<"Saniyəni daxil edin :";
    cin>>san;
    dəq=san/60;
    san=san-dəq*60;
    saat=san/3600;
    cout<<saat<<endl;
    cout<<dəq;
}
