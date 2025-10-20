#include <iostream>
using namespace std;
int main(){
  double a;
  cout<<"Bir ədəd daxil edin :";
  cin>>a;
  if(a>0){
      cout<<"Ədəd müsbətdir";
  }
  else{
      if(a<0){
          cout<<"Ədəd mənfidir";
      }
      else{
          cout<<"Ədəd 0-dır";
      }
  }
}
