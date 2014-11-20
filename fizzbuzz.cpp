#include <iostream>
using namespace std;

int main()
{
  for ( int x = 0; x < 100; x++){
    if (x % 15 == 0){
      cout<<"fizzbuzz\n";
    }
    else if (x % 5 == 0){
      cout<<"buzz\n";
    }
    else if (x % 3 == 0){
      cout<<"fizz\n";
    }
    else{
      cout<< x << "\n";
    }
  }
  return 0;
}
