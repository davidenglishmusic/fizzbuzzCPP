#include <iostream>

int main()
{
  for ( int x = 0; x < 100; x++){
    if (x % 15 == 0){
      std::cout<<"fizzbuzz\n";
    }
    else if (x % 5 == 0){
      std::cout<<"buzz\n";
    }
    else if (x % 3 == 0){
      std::cout<<"fizz\n";
    }
    else{
      std::cout<< x;
      std::cout<<"\n";
    }
  }

  return 0;
}
