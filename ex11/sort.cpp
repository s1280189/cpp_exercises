#include "sort.h"
#include <list>
#include <algorithm>

using namespace PL4;
int main(){
  std::list<int>::iterator t;

  t.push_back(1);
  t.push_back(5);
  t.push_back(3);
  t.push_back(2);
  t.push_back(9);
  t.push_back(6);

  sort(t.cbegin(), t.cend());

  std::for_each(t.cbegin(), t.cend(), [](int x){
    std::cout<<x<<" " ;
  });
  
  return 0;
}
