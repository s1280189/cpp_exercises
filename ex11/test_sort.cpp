#include "sort.h"
#include <list>
#include <algorithm>

using namespace PL4;
int main(){
  std::list<int> t;

  t.push_back(1);
  t.push_back(5);
  t.push_back(3);
  t.push_back(2);
  t.push_back(9);
  t.push_back(6);

  PL4::sort(t.begin(), t.end());

  std::for_each(t.cbegin(), t.cend(), [](int x){
    std::cout<<x<<" " ;  
  });
  
  return 0;
}
