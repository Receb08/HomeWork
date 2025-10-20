#include <iostream>
using namespace std;
int main() {
    char əməl;
    int say;
    double ədəd, nəticə;
    cout<<"Əməliyyatı daxil edin : ";
    cin>>əməl;
    cout<<"Neçə ədəd olacaq? ";
    cin>>say;
    cout<<"1-ci ədədi daxil edin: ";
    cin>>nəticə;
    int i=2;
    if (əməl=='+') {
        while (i<=say) {
            cout<<i<<"-ci ədədi daxil edin: ";
            cin>>ədəd;
            nəticə=nəticə+ədəd;
            i++;
        }
        cout<<"Nəticə: "<<nəticə<< endl;
    }
    else if (əməl == '-') {
        while (i<=say) {
            cout<<i<< "-ci ədədi daxil edin: ";
            cin>>ədəd;
            nəticə=nəticə-ədəd;
            i++;
        }
        cout<<"Nəticə: "<<nəticə<<endl;
    }
    else if (əməl=='*') {
        while (i<=say) {
            cout<<i<<"-ci ədədi daxil edin: ";
            cin>>ədəd;
            nəticə=nəticə*ədəd;
            i++;
        }
        cout<<"Nəticə: "<<nəticə<< endl;
    }
    else if (əməl == '/') {
        while (i<=say) {
            cout<<i<<"-ci ədədi daxil edin: ";
            cin>>ədəd;
            if (ədəd==0) {
                cout<<"Sıfıra bölmə yoxdur" << endl;
                return 0;
            }
            nəticə=nəticə/ədəd;
            i++;
        }
        cout <<"Nəticə: "<<nəticə<< endl;
    }
    else {
        cout << "Yalnız +, -, *, / əmeliyyatlarından istifade edin" << endl;
    }

    return 0;
}
