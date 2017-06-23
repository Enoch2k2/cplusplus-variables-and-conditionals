#include <iostream>
using namespace std;

int main(){
  int a = 3;
  int b = 2;
  b = a++;
  if(a > b){
    cout << "a is greater than b\n";
  } else if (b < a){
    cout << "b is greater than a\n";
  } else {
    cout << "a is equal to b\n";
  }
  return 0;
}
