#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "3 ədəd daxil edin : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << "Ən böyük ədəd: " << a << endl;
    else
        if (b > a && b > c)
        cout << "Ən böyük ədəd: " << b << endl;
    else
        if (c > a && c > b)
        cout << "Ən böyük ədəd: " << c << endl;
    else
        cout << "Ədədlər bərabərdir" << endl;
}
