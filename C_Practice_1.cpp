#include <iostream>

using namespace std;

void recursive(int x) {
  if (x<5) {
    cout << x;
    recursive(x+1);
    cout << "B";
  } else {
    cout << "A";
  }
}

int main(){
  recursive(1);
}