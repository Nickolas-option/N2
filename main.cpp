#include <iostream>
#include <cmath>
using namespace std;
int main1() {
  string login,pass;
  cout << "Put here your new login and password";
  cin >> login >> pass;
  string login1,pass1;
  cin >> login1 >> pass1;
  if (login1==login & pass==pass1) {
    cout<<"Access granted.";}
  else{
    cout<<"Try again later";
  }
}