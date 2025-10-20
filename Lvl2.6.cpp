#include <iostream>
using namespace std;
int main() {
    int ay;
    cout<<"Ayın nömrəsini daxil edin (1-12): ";
    cin>>ay;
    if (ay==1)
        cout<<"Yanvar";
    else 
        if (ay == 2)
            cout << "Fevral";
    else 
        if (ay == 3)
            cout << "Mart";
    else 
        if (ay == 4)
            cout << "Aprel";
    else 
        if (ay == 5)
            cout << "May";
    else 
        if (ay == 6)
            cout << "Iyun";
    else    
        if (ay == 7)
            cout << "Iyul";
    else 
        if (ay == 8)
            cout << "Avqust";
    else 
        if (ay == 9)
            cout << "Sentyabr";
    else 
        if (ay == 10)
            cout << "Oktyabr";
    else 
        if (ay == 11)
            cout << "Noyabr";
    else 
        if (ay == 12)
            cout << "Dekabr";
    else
        cout << "Daxil etdiyiniz nömrə 1-12 aralığında olmalıdır";
}
