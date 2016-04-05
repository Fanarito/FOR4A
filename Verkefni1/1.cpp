#include <iostream>
using namespace std;

int main(){
  for(int i = 8; i >= 0; i--){
    for(int x = 0; x <= i; x++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
