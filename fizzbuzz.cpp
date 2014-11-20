#include <iostream>
using namespace std;

int main()
{
  int y;

  cout << "Enter a number:";
  cin >> y;

  for ( int x = 1; x <= y; x++){
    if (x % 15 == 0){
      cout << "fizzbuzz\n";
    }
    else if (x % 5 == 0){
      cout << "buzz\n";
    }
    else if (x % 3 == 0){
      cout << "fizz\n";
    }
    else{
      cout<< x << "\n";
    }
  }
  return 0;
}
