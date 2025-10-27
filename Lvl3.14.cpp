#include <iostream>
using namespace std;
int main() {
    int i=1;
    for (i;i<100;++i){
        if (i%3==0 && i%7==0){
            cout<<i<<endl;
        }
    }
}