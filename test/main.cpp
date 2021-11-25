#include <iostream>

int main () {
  std::string *a = new std::string[0];
  for(int i = 0; i < 4 ;i++)
  std::cout << a[i] ;
  return 0;

}